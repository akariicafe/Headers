@class UIColor, SUImageModifier;

@interface SUImageDataProvider : ISDataProvider <NSCopying>

@property (retain) UIColor *fillColor;
@property struct CGSize { double width; double height; } finalSize;
@property double inputImageScale;
@property (retain) SUImageModifier *modifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_getFinalSize:(struct CGSize { double x0; double x1; } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forImage:(id)a2 withModifier:(id)a3;
- (id)newImageFromImage:(id)a0;

@end
