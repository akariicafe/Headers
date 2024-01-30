@class NSPurgeableData;

@interface WFPurgeableImage : NSObject {
    unsigned int _bitmapInfo;
    NSPurgeableData *_bytes;
    struct CGColorSpace { } *_colorSpace;
    unsigned long long _bitsPerComponent;
    unsigned long long _bytesPerRow;
    struct CGSize { double width; double height; } _size;
}

- (void)dealloc;
- (id)description;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void).cxx_destruct;
- (void)accessImageContext:(id /* block */)a0;
- (struct CGImage { } *)copyImage;

@end
