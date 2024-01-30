@class NSArray, NSString, MUScrollableStackView, UIVisualEffectView, MUGradientView;
@protocol MUScrollableSegmentedPickerContentViewDelegate;

@interface MUScrollableSegmentedPickerContentView : UIView <UIScrollViewDelegate> {
    MUScrollableStackView *_contentStackView;
    UIVisualEffectView *_backgroundBlurView;
    UIVisualEffectView *_selectedPillView;
    MUGradientView *_leadingGradientOverlayView;
    MUGradientView *_trailingGradientOverlayView;
}

@property (copy, nonatomic) NSArray *viewModels;
@property (nonatomic) unsigned long long selectedIndex;
@property (weak, nonatomic) id<MUScrollableSegmentedPickerContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateGradientColors;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_handleTapWithSegmentView:(id)a0;
- (void)_setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1 invokeDelegate:(BOOL)a2;
- (void)_updateGradientVisibility;
- (void)_updateSelectedIndexAnimated:(BOOL)a0 invokeDelegate:(BOOL)a1;
- (double)idealWidthForProposedSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end
