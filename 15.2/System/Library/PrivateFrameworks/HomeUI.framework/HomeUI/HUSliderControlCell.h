@class NSArray, HUSimpleSliderControlView;

@interface HUSliderControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *sliderConstraints;
@property (retain, nonatomic) HUSimpleSliderControlView *sliderView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end
