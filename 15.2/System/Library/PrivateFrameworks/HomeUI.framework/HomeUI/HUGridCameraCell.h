@class UILabel, UIView, NSArray, _UILegibilitySettings, NADecayingTimer, UIImageView, HUVisualEffectContainerView, UIImage, HUGridCameraCellLayoutOptions, HFItem, HUCameraView, HULegibilityLabel;

@interface HUGridCameraCell : HUGridCell {
    HFItem *_item;
}

@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIImageView *recordingIndicatorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HULegibilityLabel *descriptionLabel;
@property (retain, nonatomic) HUCameraView *cameraView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) NSArray *allConstraints;
@property (retain, nonatomic) NSArray *labelsConstraints;
@property (retain, nonatomic) NADecayingTimer *descriptionLabelUpdateTimer;
@property (readonly, nonatomic) HUVisualEffectContainerView *exclamationView;
@property (readonly, nonatomic) UIImageView *exclamationImageView;
@property (readonly, nonatomic) UIImage *exclamationImage;
@property (retain, nonatomic) HUGridCameraCellLayoutOptions *layoutOptions;
@property (nonatomic) double cameraViewAlpha;
@property (readonly, nonatomic) UIView *cameraContentView;

+ (BOOL)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (void)setItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)item;
- (void)prepareForReuse;
- (void)dealloc;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)layoutOptionsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraViewFrame;
- (void)_handleShouldDifferentiateWithoutColorDidChange;
- (id)_descriptionLabelText:(id)a0;
- (BOOL)shouldDisplayAccessModeErrorContent;
- (BOOL)shouldDisplayErrorContent;
- (void)_populateExclamationImageIfNeeded;
- (void)_updateRecordIndicatorColor;
- (void)_updateCameraViewAppearance;
- (void)_animateTransitionWithView:(id)a0 animations:(id /* block */)a1;

@end
