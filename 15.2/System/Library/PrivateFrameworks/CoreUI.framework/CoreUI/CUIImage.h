@interface CUIImage : NSObject <NSCopying> {
    struct CGImage { } *_cgImage;
}

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)imageWithCGImage:(struct CGImage { } *)a0;

- (struct CGImage { } *)cgImage;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
