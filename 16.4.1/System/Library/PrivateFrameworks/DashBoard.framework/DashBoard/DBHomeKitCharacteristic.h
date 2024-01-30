@class HMCharacteristic, NSString, DBHome, DBHomeKitService, NSError, NSUUID;

@interface DBHomeKitCharacteristic : NSObject <DBHomeKitEntity>

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } valueLock;
@property (retain, nonatomic) id cachedValue;
@property (retain, nonatomic) id pendingValue;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long transactionId;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id formatedValue;
@property (nonatomic) BOOL current;
@property (readonly, nonatomic) BOOL pendingWrite;
@property (readonly, nonatomic) BOOL pendingRead;
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) BOOL notifies;
@property (readonly, nonatomic) BOOL readable;
@property (readonly, nonatomic) BOOL writeable;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) DBHome *home;
@property (readonly, weak, nonatomic) DBHomeKitService *service;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL usable;
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) double distance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)registeredCharacteristicClasses;
+ (id)chacteristicWithService:(id)a0 characteristic:(id)a1;
+ (id)characteristicFormat;
+ (id)characteristicFormats;
+ (void)registerCharacteristicClass:(Class)a0;

- (void).cxx_destruct;
- (void)_didUpdate;
- (void)_updateValue;
- (BOOL)_lock_setError:(id)a0;
- (id)initWithService:(id)a0 characteristic:(id)a1;
- (unsigned long long)_locked_State;
- (void)_readValueCompletionTransactionID:(unsigned long long)a0 error:(id)a1;
- (void)updateValueRequiringRead:(BOOL)a0;

@end
