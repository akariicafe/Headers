@class NSString, ACHMobileAssetProvider;

@interface ACHAAchievementsDaemonExtension : NSObject <HDHealthDaemonExtension, HDHealthDaemonReadyObserver, HDCacheDeleteProvider> {
    ACHMobileAssetProvider *_mobileAssetProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0 mobileAssetProvider:(id)a1;
- (long long)purgeSpaceForUrgency:(int)a0;
- (long long)purgeableSpaceForUrgency:(int)a0;

@end
