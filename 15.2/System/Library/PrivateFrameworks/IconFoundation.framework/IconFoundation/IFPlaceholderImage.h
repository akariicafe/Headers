@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (void)setValidationFlags:(unsigned long long)a0;
- (id)initWithImage:(id)a0;
- (id)validationToken;
- (unsigned long long)validationFlags;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGSize { double x0; double x1; })size;
- (struct CGImage { } *)CGImage;
- (double)scale;
- (BOOL)placeholder;
- (void).cxx_destruct;
- (void)setPlaceholder:(BOOL)a0;

@end
