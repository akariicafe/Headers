@interface VideosUI.VideosUI : NSObject

+ (id)getTipViewControllerIfAny:(id)a0;
+ (void)notifyAppearingViewControllerOfTabSwitch:(id)a0;
+ (id)viewControllerWith:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
+ (id)getFullorHalfSheetPromptedAt;
+ (double)getPlaybackElapsedTime;
+ (void)handleAppDidFinishLoading;
+ (void)handleGDPRDidChangeSignal;
+ (void)handlePlaybackDidEndForTCC;
+ (void)handleUpsellPresented:(BOOL)a0;
+ (void)initializeGroupActivities;
+ (void)initializeJSContext:(id)a0;
+ (void)initializeUIFactory;
+ (void)initializeUnifiedMessagingManager;
+ (void)markLastPlaybackEventasError;
+ (void)markLastPlaybackEventasUpsellPresented;
+ (void)markPlaybackElapsedTime:(double)a0;
+ (void)messageViewController:(id)a0 didSelectActionWith:(id)a1;
+ (void)processDeeplink:(id)a0;
+ (void)pushDownloadDidStartSignal;
+ (id)visualAddressOf:(id)a0;

- (id)init;

@end
