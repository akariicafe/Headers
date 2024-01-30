@class SBWallpaperController, SBSystemGestureManager, SBFZStackResolver, SBIconController, SBCoverSheetPresentationManager, CSCoverSheetViewController, SBSystemApertureController, SBControlCenterController, SBAlertItemsController, SBFTraitsArbiter, SBLockScreenManager, SBSwitcherController, SBFloatingDockController, SBModalAlertPresentationCoordinator, SBWindowHidingManager;
@protocol SBTransientOverlayPresenting, FBSDisplayLayoutPublishing, SBAssistantOrientationAccomodating, SBLockScreenEnvironment;

@interface SBAssistantContext : NSObject

@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (retain, nonatomic) id<FBSDisplayLayoutPublishing> displayLayoutPublisher;
@property (retain, nonatomic) id<SBLockScreenEnvironment> lockScreenEnvironment;
@property (retain, nonatomic) SBAlertItemsController *alertItemsController;
@property (retain, nonatomic) SBControlCenterController *controlCenterController;
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (retain, nonatomic) SBFloatingDockController *floatingDockController;
@property (retain, nonatomic) SBSystemApertureController *systemApertureController;
@property (retain, nonatomic) SBFTraitsArbiter *traitsArbiter;
@property (retain, nonatomic) SBFZStackResolver *zStackResolver;
@property (retain, nonatomic) SBIconController *iconController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBSwitcherController *switcherController;
@property (retain, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) id<SBTransientOverlayPresenting> transientOverlayPresenter;
@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (retain, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (retain, nonatomic) id<SBAssistantOrientationAccomodating> orientationAccomodation;

+ (id)contextForWindowScene:(id)a0;

- (void).cxx_destruct;

@end
