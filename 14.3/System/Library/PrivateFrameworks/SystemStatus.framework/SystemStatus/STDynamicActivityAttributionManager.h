@class NSMutableDictionary, NSString, STDynamicActivityAttributionListener, NSObject;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle>

@property (readonly, nonatomic) STDynamicActivityAttributionListener *dynamicAttributionListener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSMutableDictionary *clientAttributionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)currentAttributedAppForClient:(id)a0;
- (id)currentAttributionKeyForClient:(id)a0;
- (void)setLocalizableAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (void)_internalQueue_setAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;

@end
