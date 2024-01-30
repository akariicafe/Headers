@class SKUIColorScheme, _UIBackdropView, UIView, UISegmentedControl;

@interface SKUIProductPageHeaderFloatingView : UIView {
    UIView *_separatorView;
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    BOOL _isPad;
}

@property (nonatomic) double backdropAlpha;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (readonly, nonatomic) UISegmentedControl *sectionControl;
@property (nonatomic) long long selectedSectionIndex;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithSectionTitles:(id)a0 isPad:(BOOL)a1;
- (void)_reloadBackdropView;

@end
