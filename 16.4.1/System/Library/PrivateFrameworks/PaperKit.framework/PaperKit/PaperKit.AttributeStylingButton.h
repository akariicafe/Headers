@interface PaperKit.AttributeStylingButton : PaperKit.AttributeStylingControl

@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (id)initWithCoder:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;

@end
