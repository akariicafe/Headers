@interface _UIStatusBarImageProvider : NSObject

+ (id)sharedProvider;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_alignmentInsetsForImageNamed:(id)a0 styleAttributes:(id)a1;
- (BOOL)_suppressHairlineThickeningForImageName:(id)a0 styleAttributes:(id)a1;
- (id)imageNamed:(id)a0 styleAttributes:(id)a1;

@end
