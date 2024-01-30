@class NSString, FBSSerialQueue, BSServiceConnectionListener;
@protocol UISApplicationStateServiceDelegate;

@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface> {
    BSServiceConnectionListener *_listener;
    FBSSerialQueue *_calloutQueue;
    struct { unsigned char delegateDataSourceForApplicationBundleIdentifier : 1; } _delegateFlags;
}

@property (weak, nonatomic) id<UISApplicationStateServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)setBadgeValue:(id)a0;
- (oneway void)setUsesBackgroundNetwork:(id)a0;
- (BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)a0 description:(id)a1;
- (void)usesBackgroundNetworkWithCompletion:(id /* block */)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)a0 description:(id)a1 legacyEntitlement:(id)a2;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(id /* block */)a0;
- (id)_dataSourceForApplicationBundleIdentifier:(id)a0;
- (void)badgeValueWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCalloutQueue:(id)a0;
- (oneway void)setMinimumBackgroundFetchInterval:(id)a0;
- (oneway void)setNextWakeIntervalSinceReferenceDate:(id)a0;
- (id)_operatingBundleIdentifier;

@end
