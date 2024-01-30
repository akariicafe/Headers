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
- (id)item;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraViewFrame;
- (void)_animateTransitionWithView:(id)a0 animations:(id /* block */)a1;
- (id)_descriptionLabelText:(id)a0;
- (void)_handleShouldDifferentiateWithoutColorDidChange;
- (void)_populateExclamationImageIfNeeded;
- (void)_updateCameraViewAppearance;
- (void)_updateRecordIndicatorColor;
- (void)layoutOptionsDidChange;
- (BOOL)shouldDisplayAccessModeErrorContent;
- (BOOL)shouldDisplayErrorContent;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
