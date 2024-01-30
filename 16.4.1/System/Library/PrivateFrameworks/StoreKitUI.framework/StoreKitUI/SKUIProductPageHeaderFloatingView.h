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

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_reloadBackdropView;
- (id)initWithSectionTitles:(id)a0 isPad:(BOOL)a1;

@end
