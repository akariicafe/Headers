@interface SearchUISeparatorView : TLKProminenceView

@property (nonatomic) double separatorHeight;

+ (unsigned long long)separatorProminenceForAppearance:(id)a0;
+ (id)separatorColorForAppearance:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)didMoveToWindow;

@end
