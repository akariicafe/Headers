@class NSArray, HUSimpleSliderControlView;

@interface HUSliderControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *sliderConstraints;
@property (retain, nonatomic) HUSimpleSliderControlView *sliderView;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)allControlViews;
- (void)_updateSliderConstraints;

@end
