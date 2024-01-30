@class UIHoverGestureRecognizer, NSLayoutConstraint, AVVolumeButtonControl, AVVolumeSlider, AVLayoutView, UIView, AVVolumeControlsContentView;
@protocol AVVolumeControlsControllerDelegate, AVVolumeControlsControllerLayoutDelegate;

@interface AVVolumeControlsController : NSObject

@property (retain, nonatomic) AVVolumeControlsContentView *volumeControlsContentView;
@property (retain, nonatomic) AVLayoutView *volumeSliderContentView;
@property (weak, nonatomic) UIView *volumeControlParentView;
@property (nonatomic) BOOL volumeSliderGestureActive;
@property (retain, nonatomic) UIHoverGestureRecognizer *volumeSliderHover;
@property (nonatomic) float volumeSliderTransportBarHeight;
@property (nonatomic) float playerViewHeight;
@property (retain, nonatomic) NSLayoutConstraint *volumeSliderGapConstraint;
@property (retain, nonatomic) NSLayoutConstraint *volumeSliderWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *volumeSliderHeightConstraint;
@property (readonly, nonatomic) AVVolumeButtonControl *volumeButton;
@property (readonly, nonatomic) AVVolumeSlider *volumeSlider;
@property (nonatomic) BOOL canShowVolumeSlider;
@property (weak) id<AVVolumeControlsControllerDelegate> volumeControllerDelegate;
@property (weak) id<AVVolumeControlsControllerLayoutDelegate> transportViewDelegate;

- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)updateVolumeControlsContollerLayout;
- (void)layoutVolumeSliderViewIfNeeded;
- (void)prepareSliderView;
- (void)showSliderViewIfNeeded;
- (void)hideVolumeSlider;
- (void)mouseDidEnterVolumeControlsVolumeButton:(id)a0;
- (void)mouseDidEnterVolumeControlsContentView:(id)a0;

@end
