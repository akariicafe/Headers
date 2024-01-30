@interface SearchUISeparatorView : TLKProminenceView

@property (nonatomic) double separatorHeight;

+ (unsigned long long)separatorProminenceForAppearance:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
