@class NSString, AMSThreadSafeSet, NSArray, ACAccount;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject

@property (class, readonly, nonatomic) AMSThreadSafeSet *globalBagValueStorage;

@property (copy, nonatomic) ACAccount *account;
@property (weak, nonatomic) id<AMSBagDataSourceProtocol> dataSource;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *transformBlocks;
@property (nonatomic) unsigned long long valueType;
@property (nonatomic) struct optional<AMSCore::Bag> { union { char __null_state_; struct Bag { void /* function */ **_vptr$ILoggable; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; } __val_; } ; BOOL __engaged_; } bag;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;

+ (BOOL)_value:(id)a0 isKindOfValueType:(unsigned long long)a1;
+ (id)frozenBagValueWithKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;
+ (id)_NSErrorFromError:(const void *)a0;
+ (id)_valueFromDictionary:(id)a0 forBagKey:(id)a1;
+ (id)failingBagValueWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
+ (id)bagValueWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;

- (void)_handleFailureWithError:(const void *)a0 completion:(id /* block */)a1;
- (id)valueWithError:(id *)a0;
- (id)valuePromise;
- (id).cxx_construct;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2;
- (id)initWithBag:(struct Bag { void /* function */ **x0; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *x0; struct __shared_weak_count *x1; } x1; })a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (void)_handleSuccessWithValue:(id)a0 isDefault:(BOOL)a1 completion:(id /* block */)a2;
- (id)_processedDefaultValue:(id)a0;
- (void)valueWithCompletion:(id /* block */)a0;
- (void)_applyTransformsToValue:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (id)transformWithBlock:(id /* block */)a0;

@end
