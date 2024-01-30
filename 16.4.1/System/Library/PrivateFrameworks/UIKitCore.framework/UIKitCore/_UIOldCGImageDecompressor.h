@class NSData;

@interface _UIOldCGImageDecompressor : _UICGImageDecompressor {
    NSData *_imageData;
    struct CGSize { double width; double height; } _maxSize;
    struct CGImage { } *_imageRef;
    unsigned long long _renderingIntent;
    unsigned long long _jpegDecodeRequestID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _metadataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decompressionLock;
    struct { unsigned char metadataFinished : 1; unsigned char imageOrientation : 3; unsigned char decompressionFinished : 1; unsigned char cache : 1; } _decompressorFlags;
}

- (struct CGImage { } *)waitForImageRef;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
