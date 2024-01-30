@class CKDeviceOrientationManager, CKScheduledUpdater, CKHandwritingWindow, CKBrowserItemPayload, NSString, NSObject, UIViewController;
@protocol CKHandwritingViewControllerSendDelegate, CKHandwritingBrowserViewControllerProtocol, CKHandwritingPresentationControllerDelegate;

@interface CKHandwritingPresentationController : NSObject

@property (retain, nonatomic) CKHandwritingWindow *handwritingWindow;
@property (retain, nonatomic) UIViewController<CKHandwritingBrowserViewControllerProtocol> *browserViewController;
@property (retain, nonatomic) CKScheduledUpdater *animationScheduledUpdater;
@property (nonatomic) BOOL requestedVisibility;
@property (nonatomic) BOOL actualVisibility;
@property (nonatomic) BOOL requestedVisibilityShouldBeAnimated;
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *cachedSendDelegate;
@property (retain, nonatomic) CKBrowserItemPayload *cachedPluginPayload;
@property (nonatomic) BOOL suppressAppearanceCallbacksBecauseOfFirstInitialization;
@property (nonatomic) BOOL foregrounded;
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *sendDelegate;
@property (weak, nonatomic) NSObject<CKHandwritingPresentationControllerDelegate> *delegate;
@property (retain, nonatomic) CKDeviceOrientationManager *deviceOrientationManager;
@property (retain, nonatomic) CKBrowserItemPayload *pluginPayload;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) BOOL visible;
@property (readonly) NSString *pluginBundleID;

- (void)_handleApplicationDidEnterBackground:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isHandwritingLandscape;
- (void)_loadCachedPayloadIntoBrowser;
- (void)_flushHandwritingWindowCacheIfNeeded;
- (void)_doInitialization;
- (void)_updateVisibilityState;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_handleApplicationWillEnterForeground:(id)a0;

@end
