@class NSData, NSString, CIImage;

@interface PLImageContainer : NSObject {
    void *_ioSurface;
    CIImage *_CIImage;
    struct CGSize { double width; double height; } _pixelSize;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) void *ioSurface;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithPLImage:(id)a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (id)description;
- (id)initWithCGImage:(struct CGImage { } *)a0 ioSurface:(void *)a1 CIImage:(id)a2 backingData:(id)a3 uniformTypeIdentifier:(id)a4 size:(struct CGSize { double x0; double x1; })a5;
- (id)initWithPLImage:(id)a0 backingData:(id)a1 uniformTypeIdentifier:(id)a2;

@end
