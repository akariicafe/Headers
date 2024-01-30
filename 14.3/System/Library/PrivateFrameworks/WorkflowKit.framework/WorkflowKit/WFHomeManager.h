@class NSArray, NSString, HMHomeManager, NSHashTable, NSObject;
@protocol OS_dispatch_group;

@interface WFHomeManager : NSObject <HMHomeManagerDelegate, WFApplicationStateObserver>

@property (readonly, nonatomic) NSHashTable *eventObservers;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *loadHomesGroup;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) BOOL hasLoadedHomes;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSArray *homes;
@property (readonly, nonatomic) NSArray *homesToWhichWeHaveAdminAccess;
@property (readonly, nonatomic) NSArray *homesToWhichWeCanAddHomeAutomations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)cachedHomeSceneNames;

- (void)reloadData;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)primaryHome;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)_setHomes:(id)a0;
- (void)ensureHomesAreLoadedWithCompletionHandler:(id /* block */)a0;
- (void)addEventObserver:(id)a0;
- (void)removeEventObserver:(id)a0;
- (id)homeNamed:(id)a0;
- (id)homeWithIdentifier:(id)a0;
- (id)sceneNamed:(id)a0 inHome:(id)a1;
- (id)serviceWithIdentifier:(id)a0 inHome:(id)a1;
- (void)cacheHomeSceneNames;

@end
