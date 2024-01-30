@class NSData;

@interface _UICGImageDecompressor : NSObject {
    NSData *_imageData;
    struct CGSize { double width; double height; } _maxSize;
    struct CGImage { } *_imageRef;
    unsigned long long _renderingIntent;
    unsigned long long _jpegDecodeRequestID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _metadataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decompressionLock;
    struct { unsigned char metadataFinished : 1; unsigned char imageOrientation : 3; unsigned char decompressionFinished : 1; unsigned char cache : 1; } _decompressorFlags;
}

+ (void)flushCaches;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 immediateLoadWithMaxSize:(struct CGSize { double x0; double x1; })a1 renderingIntent:(unsigned long long)a2 cache:(BOOL)a3;
- (void)dealloc;
- (unsigned long long)hash;
- (struct CGImage { } *)waitForImageRef;
- (BOOL)isEqual:(id)a0;

@end
