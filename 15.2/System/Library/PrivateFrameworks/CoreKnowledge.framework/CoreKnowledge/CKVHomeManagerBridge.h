@class NSString, HMHomeManager, NSObject;
@protocol OS_dispatch_group;

@interface CKVHomeManagerBridge : NSObject <HMHomeManagerDelegate, CKVProviderDatasetBridge>

@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *waitGroup;
@property (readonly, nonatomic) double setupTimeout;
@property BOOL homesLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (id)originApp;
- (BOOL)enumerateVocabularyItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithHomeManager:(id)a0 waitGroup:(id)a1 setupTimeout:(double)a2;
- (id)_parseHMHome:(id)a0;
- (id)_parseHMZone:(id)a0;
- (id)_parseHMRoom:(id)a0;
- (id)_parseHMService:(id)a0;
- (id)_parseHMServiceGroup:(id)a0;
- (id)_parseHMActionSet:(id)a0;
- (id)_parseHMTrigger:(id)a0;
- (id)_parseHMAccessory:(id)a0;

@end
