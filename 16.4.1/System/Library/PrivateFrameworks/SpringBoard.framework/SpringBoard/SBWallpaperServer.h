@class FBServiceClientAuthenticator;
@protocol SBWallpaperServerDelegate;

@interface SBWallpaperServer : FBSServiceFacility

@property (weak, nonatomic) id<SBWallpaperServerDelegate> delegate;
@property (retain, nonatomic) FBServiceClientAuthenticator *accessAuthenticator;

+ (id)sharedInstance;

- (BOOL)_clientPermittedToModifyWallpaper:(id)a0;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (void)_handleFetchLockScreenForegroundBoundsMessage:(id)a0 fromClient:(id)a1;
- (long long)_wallpaperModeFromXPCDictionary:(id)a0;
- (long long)_deviceOrientationFromXPCDictionary:(id)a0;
- (id)_init;
- (void)_handleFetchContentCutoutBoundsMessage:(id)a0 fromClient:(id)a1;
- (void)_handleFetchOriginalVideoURLMessage:(id)a0 fromClient:(id)a1;
- (long long)_wallpaperVariantFromXPCDictionary:(id)a0;
- (void)_handleSetVideoMessageWithWallpaperMode:(id)a0 fromClient:(id)a1;
- (void)_handleFetchLimitedOcclusionBoundsMessage:(id)a0 fromClient:(id)a1;
- (void)_handleFetchThumbnailMessage:(id)a0 fromClient:(id)a1;
- (BOOL)_xpcObjectIsDictionary:(id)a0;
- (void)_handleSetGradientMessage:(id)a0 fromClient:(id)a1;
- (void)_handleRestoreDefaultWallpaperMessage:(id)a0 fromClient:(id)a1;
- (void)_handleFetchLockScreenTimeBoundsMessage:(id)a0 fromClient:(id)a1;
- (void)_handleFetchLockScreenContentCutoutBoundsMessage:(id)a0 fromClient:(id)a1;
- (void)_handleTriggerPosterSignificantEventMessage:(id)a0 fromClient:(id)a1;
- (void)_handleSetColorNameMessage:(id)a0 fromClient:(id)a1;
- (void)_handleFetchLockScreenMaximalContentCutoutBoundsMessage:(id)a0 fromClient:(id)a1;
- (void)_handleFetchPosterSignificantEventsCounterMessage:(id)a0 fromClient:(id)a1;
- (void)_handleSetColorMessage:(id)a0 fromClient:(id)a1;
- (void).cxx_destruct;
- (void)_handleFetchOriginalImageMessage:(id)a0 fromClient:(id)a1;

@end
