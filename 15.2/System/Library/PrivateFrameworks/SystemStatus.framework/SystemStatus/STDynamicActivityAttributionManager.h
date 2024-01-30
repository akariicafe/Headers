@class NSMutableDictionary, NSString, STDynamicActivityAttributionListener, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle>

@property (readonly, nonatomic) STDynamicActivityAttributionListener *dynamicAttributionListener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSMutableDictionary *clientAttributionMap;
@property (retain, nonatomic) NSMutableSet *monitorClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAttributionForClient:(struct { unsigned int x0[8]; })a0;
- (id)currentAttributionForAttribution:(id)a0;
- (void)_internalQueue_setAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (id)currentAttributionKeyForClient:(id)a0;
- (void)unsubscribeFromUpdates:(id)a0;
- (void)setAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)setLocalizableAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (void).cxx_destruct;
- (void)subscribeToUpdates:(id)a0;
- (id)currentAttributedAppForClient:(id)a0;
- (id)init;
- (void)_internalQueue_setAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)_updateAttributionMapWithAttribution:(id)a0 clientID:(id)a1;

@end
