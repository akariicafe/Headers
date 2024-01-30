@class ISImage;

@interface ISPlaceholderImage : ISImage

@property (readonly) ISImage *image;

- (struct CGImage { } *)cgImage;
- (BOOL)placeholder;
- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (double)scale;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;

@end
