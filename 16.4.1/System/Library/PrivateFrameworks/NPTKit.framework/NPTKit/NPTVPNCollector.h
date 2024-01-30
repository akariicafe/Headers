@class NSString, NSArray, NEConfiguration, NEConfigurationManager, NSMutableDictionary, NSObject, NEVPNManager;
@protocol OS_dispatch_queue;

@interface NPTVPNCollector : NSObject <NPTMetadataCollection>

@property (retain) NEVPNManager *manager;
@property (retain) NEConfigurationManager *configManager;
@property (retain) NEConfiguration *config;
@property (retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain) NSArray *eventsToMonitor;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectorName;

- (void)stopCollecting;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)collectVPNAddressesWithCompletion:(id /* block */)a0;
- (void)getExtendedStatus:(int)a0 session:(void *)a1 completionHandler:(id /* block */)a2;
- (id)getVPNStatusAsString:(long long)a0;
- (void)vpnNotificationReceived:(id)a0;

@end
