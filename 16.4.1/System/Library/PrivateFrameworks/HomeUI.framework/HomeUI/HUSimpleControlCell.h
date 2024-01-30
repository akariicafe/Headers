@class NSArray, UIView;
@protocol HUControlView;

@interface HUSimpleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *controlViewConstraints;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)allControlViews;
- (void)_updateSliderConstraints;

@end
