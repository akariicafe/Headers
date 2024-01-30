@class NSArray, UIView;
@protocol HUControlView;

@interface HUSimpleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *controlViewConstraints;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end
