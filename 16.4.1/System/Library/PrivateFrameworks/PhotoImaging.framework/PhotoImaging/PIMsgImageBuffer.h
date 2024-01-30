@class NSMutableData;

@interface PIMsgImageBuffer : NSObject {
    struct CGColorSpace { } *bufferColorspace;
}

@property (retain) NSMutableData *data;
@property (readonly) unsigned long long elementByteSize;
@property (readonly) unsigned long long rowElements;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) int format;

- (void *)bytes;
- (void)dealloc;
- (id)image;
- (void).cxx_destruct;
- (id)initWithBytes:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(long long)a3 bytesPerComponent:(unsigned long long)a4 format:(int)a5 colorspace:(struct CGColorSpace { } *)a6;
- (id)initWithData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(long long)a3 bytesPerComponent:(unsigned long long)a4 format:(int)a5 colorspace:(struct CGColorSpace { } *)a6;

@end
