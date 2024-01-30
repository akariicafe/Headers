@class CAMTimerStatusIndicator, NSMutableDictionary, CAMLivePhotoStatusIndicator, CAMHDRStatusIndicator, CAMIntensityStatusIndicator, CAMVideoConfigurationStatusIndicator, CAMLowLightStatusIndicator, CAMApertureStatusIndicator, CAMDirectionalIndicator, UIView, NSSet, CAMRAWStatusIndicator, CAMExposureBiasStatusIndicator, NSString, NSArray, CAMFlashStatusIndicator, CAMFilterStatusIndicator;
@protocol CAMControlStatusBarDelegate;

@interface CAMControlStatusBar : UIView <CAMControlStatusIndicatorDelegate, CAMAccessibilityHUDItemProvider>

@property (readonly, nonatomic) NSMutableDictionary *_statusIndicatorsByType;
@property (retain, nonatomic, setter=_setAllVisibleTypes:) NSSet *_allVisibleTypes;
@property (retain, nonatomic, setter=_setAllDesiredTypes:) NSSet *_allDesiredTypes;
@property (nonatomic, getter=_isDirectionIndicatorHiddenForSpace, setter=_setDirectionIndicatorHiddenForSpace:) BOOL _directionIndicatorHiddenForSpace;
@property (weak, nonatomic) id<CAMControlStatusBarDelegate> delegate;
@property (copy, nonatomic) NSArray *primaryDesiredIndicatorTypes;
@property (copy, nonatomic) NSArray *primaryVisibleIndicatorTypes;
@property (copy, nonatomic) NSArray *secondaryDesiredIndicatorTypes;
@property (readonly, nonatomic) CAMFlashStatusIndicator *flashIndicator;
@property (readonly, nonatomic) CAMLivePhotoStatusIndicator *livePhotoIndicator;
@property (readonly, nonatomic) CAMHDRStatusIndicator *hdrIndicator;
@property (readonly, nonatomic) CAMTimerStatusIndicator *timerIndicator;
@property (readonly, nonatomic) CAMFilterStatusIndicator *filterIndicator;
@property (readonly, nonatomic) CAMApertureStatusIndicator *apertureIndicator;
@property (readonly, nonatomic) CAMIntensityStatusIndicator *intensityIndicator;
@property (readonly, nonatomic) CAMExposureBiasStatusIndicator *exposureBiasIndicator;
@property (readonly, nonatomic) CAMVideoConfigurationStatusIndicator *videoConfigurationIndicator;
@property (readonly, nonatomic) CAMLowLightStatusIndicator *lowLightIndicator;
@property (readonly, nonatomic) CAMRAWStatusIndicator *rawIndicator;
@property (nonatomic, getter=isDirectionIndicatorVisible) BOOL directionIndicatorVisible;
@property (readonly, nonatomic) CAMDirectionalIndicator *directionIndicator;
@property (retain, nonatomic) UIView *primaryAccessoryControl;
@property (retain, nonatomic) UIView *secondaryAccessoryControl;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_iterateViewsForHUDManager:(id)a0 withItemFoundBlock:(id /* block */)a1;
- (void)setDirectionIndicatorVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isIndicatorDesiredForType:(unsigned long long)a0;
- (void)setPrimaryDesiredIndicatorTypes:(id)a0 secondaryDesiredIndicatorTypes:(id)a1 animated:(BOOL)a2;
- (id)indicatorForType:(unsigned long long)a0;
- (void)_layoutAllDesiredTypes:(id)a0 atOrigin:(long long)a1;
- (void)_updateIndicatorsVisibilityAnimated:(BOOL)a0;
- (void)_layoutDesiredViewsForTypes:(id)a0 inDesiredTypes:(id)a1 atOrigin:(long long)a2;
- (void)_handleFlashStatusIndicatorTapped:(id)a0;
- (void)_handleLivePhotoStatusIndicatorTapped:(id)a0;
- (void)_handleHDRStatusIndicatorTapped:(id)a0;
- (void)_handleTimerStatusIndicatorTapped:(id)a0;
- (void)_handleFilterStatusIndicatorTapped:(id)a0;
- (void)_handleApertureStatusIndicatorTapped:(id)a0;
- (void)_handleIntensityStatusIndicatorTapped:(id)a0;
- (void)_handleExposureBiasStatusIndicatorTapped:(id)a0;
- (void)_handleLowLightStatusIndicatorTapped:(id)a0;
- (void)_handleRAWStatusIndicatorTapped:(id)a0;
- (void)_ensureDesiredIndicators;
- (void)_prelayoutForNewTypes:(id)a0 oldTypes:(id)a1 atOrigin:(long long)a2;
- (void)_updateDirectionIndicatorAlphaAnimated:(BOOL)a0;
- (void)_loadIndicatorIfNeededForType:(unsigned long long)a0;
- (void)_installIndicatorIfNeededForType:(unsigned long long)a0;
- (id)_createIndicatorForType:(unsigned long long)a0;

@end
