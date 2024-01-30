@interface OKMediaImage : NSObject {
    struct CGImage { } *_cgImageRef;
}

@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double scale;

+ (id)mediaImageWithCGImage:(struct CGImage { } *)a0;
+ (id)mediaImageWithUIImage:(id)a0;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)init;
- (void)dealloc;
- (id)initWithUIImage:(id)a0;
- (struct CGImage { } *)createComposedImage:(BOOL)a0 colorSpace:(id)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 imageOrientation:(long long)a1 scale:(double)a2;

@end
