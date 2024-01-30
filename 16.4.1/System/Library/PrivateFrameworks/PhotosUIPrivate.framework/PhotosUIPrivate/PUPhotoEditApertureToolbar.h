@class NSMutableArray, NSString, _UIBackdropView, PFCoalescer, CEKApertureSlider, UILabel, UIView;
@protocol PUPhotoEditApertureToolbarDelegate;

@interface PUPhotoEditApertureToolbar : UIViewController <CEKDiscreteSliderDelegate, PUPhotoEditLayoutDynamicAdaptable> {
    UIView *_solidBackgroundView;
    _UIBackdropView *_backdropBackgroundView;
    BOOL _isResizing;
    struct CGSize { double width; double height; } _cachedSize;
    NSMutableArray *_constraints;
    PFCoalescer *_apertureUpdateCoalescer;
}

@property (retain, nonatomic) CEKApertureSlider *slider;
@property (retain, nonatomic) UILabel *depthEffectLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (weak, nonatomic) id<PUPhotoEditApertureToolbarDelegate> delegate;
@property (nonatomic) double sliderWidth;
@property (readonly, nonatomic) double apertureValue;
@property (readonly, nonatomic) double originalApertureValue;
@property (nonatomic) double minimumApertureValue;
@property (nonatomic) double maximumApertureValue;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredPreviewViewInsets;
@property (nonatomic) BOOL useTranslucentBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long layoutOrientation;

- (void)updateViewConstraints;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (void)_apertureSliderDidChangeValue:(id)a0;
- (id)_nextApertureValueFromValue:(id)a0 reverse:(BOOL)a1;
- (void)setApertureValueClosestTo:(double)a0;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)setNextApertureValue:(BOOL)a0 coarse:(BOOL)a1;
- (void)setOriginalApertureValueClosestTo:(double)a0;
- (void)setUseTranslucentBackground:(BOOL)a0 animated:(BOOL)a1;
- (void)sliderDidEndScrolling:(id)a0;
- (void)sliderWillBeginScrolling:(id)a0;

@end
