@class SBFZStackParticipant, NSString, SBBacklightController, UIView, SBWindowScene, SBFloatingDockBehaviorAssertion;
@protocol SBWallpaperEffectViewFactory;

@interface SBExternalDisplayCoverSheetViewController : UIViewController <SBFZStackParticipantDelegate, SBExternalDisplayWallpaperConfigurations, SBWallpaperEffectViewFactory>

@property (retain, nonatomic) UIView *wallpaperContainerView;
@property (retain, nonatomic) UIView *wallpaperEffectView;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (nonatomic) BOOL isPresented;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *externalDisplayFloatingDockBehaviorAssertion;
@property (weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene;
@property (readonly, nonatomic) id<SBWallpaperEffectViewFactory> wallpaperEffectViewFactory;
@property (readonly, nonatomic) SBBacklightController *backlightController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_floatingDockController;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)zStackParticipantDidChange:(id)a0;
- (void)prepareForPresentation;
- (void).cxx_destruct;
- (id)_initWithWindowScene:(id)a0 wallpaperEffectViewFactory:(id)a1;
- (void)cleanupAfterDismissal;
- (BOOL)enableBlurEffects;
- (id)newWallpaperEffectView;

@end
