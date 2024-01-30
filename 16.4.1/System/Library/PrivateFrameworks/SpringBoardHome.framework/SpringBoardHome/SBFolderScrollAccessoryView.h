@class UIPageControl, _UIPortalView, SBFFluidBehaviorSettings, SBFolder, UIViewFloatAnimatableProperty, SBIconListPageControl, UIView;

@interface SBFolderScrollAccessoryView : UIView

@property (retain, nonatomic) UIPageControl *layoutPageControl;
@property (retain, nonatomic) _UIPortalView *pageControlPortalView;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *modeAnimatableProperty;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *pageControlFadeInSettings;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *auxiliaryViewFadeInSettings;
@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) SBIconListPageControl *pageControl;
@property (retain, nonatomic) UIView *auxiliaryView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long mode;

- (void)_configurePageControlPortaling;
- (long long)_numberOfPagesForWidth:(double)a0 maxPageCount:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_layoutPageControlMatchingPageControl:(id)a0;
- (void)_clearMatchingAnimationsForBackground;
- (void)_applyMatchingAnimationsForBackgroundMatchingContentView:(id)a0 backgroundView:(id)a1;
- (void)dealloc;
- (void)_applyMatchingAnimationsForAuxiliaryViewMatchingContentView:(id)a0;
- (void)_setUpAnimation;
- (void)_applyCurrentMode;
- (void)layoutSubviews;
- (void)_clearMatchingAnimationsForAuxiliaryView;
- (id)initWithFolder:(id)a0 pageControl:(id)a1;
- (void)_updateForModePropertyChanged;
- (void).cxx_destruct;

@end
