@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation

+ (id)defaultPlaceholderText;
+ (BOOL)deleteAfterEditingIfEmpty;

- (id)displayName;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;

@end
