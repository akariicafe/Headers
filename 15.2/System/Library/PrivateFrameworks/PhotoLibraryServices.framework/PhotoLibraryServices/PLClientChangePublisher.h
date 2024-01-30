@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject <PLChangePublisher> {
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 transaction:(id)a2;
- (id)initWithAssetsdClient:(id)a0;
- (void).cxx_destruct;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;

@end
