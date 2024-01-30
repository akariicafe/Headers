@class NSString;

@interface _TVImageKeyFrameArtDecorator : TVImageScaleDecorator

@property (copy, nonatomic) NSString *inlineTitle;

- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;
- (id)initWithInlineTitle:(id)a0;

@end
