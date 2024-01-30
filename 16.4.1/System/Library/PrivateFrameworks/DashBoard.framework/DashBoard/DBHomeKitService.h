@class NSUUID, NSDictionary, CARObserverHashTable, DBHome, HMService, NSString;

@interface DBHomeKitService : NSObject <HMAccessoryDelegate, DBHomeKitEntity>

@property (nonatomic) BOOL lastWritten;
@property (retain, nonatomic) HMService *service;
@property (readonly, nonatomic) NSDictionary *characteristicsByType;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (readonly, weak, nonatomic) DBHome *home;
@property (readonly, nonatomic) NSDictionary *characteristics;
@property (readonly, nonatomic) BOOL interactive;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL reachable;
@property (readonly, nonatomic) BOOL current;
@property (readonly, nonatomic) BOOL pendingWrite;
@property (readonly, nonatomic) BOOL pendingRead;
@property (readonly, nonatomic) BOOL hasError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL usable;
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) double distance;

+ (id)serviceType;
+ (void)load;
+ (id)observerProtocol;
+ (void)registerServiceClass:(Class)a0;
+ (id)registeredServiceClasses;
+ (id)serviceWithHome:(id)a0 service:(id)a1;

- (id)serviceType;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)accessory:(id)a0 service:(id)a1 didUpdateValueForCharacteristic:(id)a2;
- (void)accessoryDidUpdateServices:(id)a0;
- (BOOL)_tracksLastUsed;
- (void)_characteristicDidUpdate:(id)a0;
- (BOOL)_shouldUpdateLastUsedForCharacteristic:(id)a0;
- (id)characteristicForName:(id)a0;
- (id)characteristicForType:(id)a0;
- (id)initWithHome:(id)a0 service:(id)a1;
- (id)managedCharacteristics;
- (void)refreshCharacteristicValues;

@end
