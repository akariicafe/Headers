@class CSComponent, NSString, NSSet, _UILegibilitySettings;
@protocol CSInterstitialTransitionDelegate;

@interface CSInterstitialTransitionSource : NSObject <CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding>

@property (nonatomic) long long transitionType;
@property (retain, nonatomic) CSComponent *homeAffordance;
@property (weak, nonatomic) id<CSInterstitialTransitionDelegate> transitioningDelegate;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) struct { double value; struct { struct { double value; BOOL inclusive; } start; struct { double value; BOOL inclusive; } end; } interval; long long mode; } transitionContext;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;

- (void)conformsToCSAppearanceProviding;
- (void)cancelTransition;
- (void).cxx_destruct;
- (void)conformsToCSBehaviorProviding;
- (void)prepareForPresentation;
- (void)conformsToCSExternalBehaviorProviding;
- (void)updatePresentationWithProgress:(double)a0;
- (void)cleanupPresentation;

@end
