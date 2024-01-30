@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject <PLChangePublisher> {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)unpauseLaunchEventNotifications;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (void)pauseLaunchEventNotifications;
- (id)initWithAssetsdClient:(id)a0;

@end
