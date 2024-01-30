@class NSString, TFImageFetcher, TFLaunchScreen;
@protocol TFBetaAppLaunchDataProvider, TFBetaAppLaunchPresenterView;

@interface TFBetaAppLaunchPresenter : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<TFBetaAppLaunchDataProvider> launchDataProvider;
@property (readonly, nonatomic) TFImageFetcher *imageFetcher;
@property (retain, nonatomic) TFLaunchScreen *launchScreen;
@property (weak, nonatomic) id<TFBetaAppLaunchPresenterView> presenterView;

- (void).cxx_destruct;
- (void)update;
- (id)initForIdentifier:(id)a0 launchDataProvider:(id)a1 launchScreenSidepack:(id)a2;
- (void)_showTestNotesViewWithLaunchScreen:(id)a0;
- (void)_showLoading;
- (void)_abortLaunchScreenLoadWithError:(id)a0;
- (void)_showHowToViewWithLaunchScreen:(id)a0;
- (void)exitLaunchScreen;
- (void)showHowToScreen;
- (void)openHowToSupportLink;

@end
