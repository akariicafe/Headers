@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (void)setPlaceholder:(BOOL)a0;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)initWithImage:(id)a0;
- (unsigned long long)validationFlags;
- (void)setValidationFlags:(unsigned long long)a0;
- (BOOL)placeholder;
- (double)scale;
- (struct CGSize { double x0; double x1; })size;
- (id)validationToken;
- (void).cxx_destruct;

@end
