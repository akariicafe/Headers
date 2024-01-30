@class NSString;

@interface _TVImage16x9Decorator : TVImageScaleDecorator

@property (copy, nonatomic) NSString *inlineTitle;

- (void).cxx_destruct;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;
- (id)decoratorIdentifier;
- (id)initWithInlineTitle:(id)a0;

@end
