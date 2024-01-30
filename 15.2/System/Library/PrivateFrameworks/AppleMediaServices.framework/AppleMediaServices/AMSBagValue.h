@class NSString, AMSThreadSafeSet, NSArray, ACAccount;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject

@property (class, readonly, nonatomic) AMSThreadSafeSet *globalBagValueStorage;

@property (copy, nonatomic) ACAccount *account;
@property (weak, nonatomic) id<AMSBagDataSourceProtocol> dataSource;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *transformBlocks;
@property (nonatomic) unsigned long long valueType;
@property (nonatomic) struct shared_ptr<AMSCore::Bag> { struct Bag *__ptr_; struct __shared_weak_count *__cntrl_; } bag;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;

+ (id)bagValueWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;
+ (id)_valueFromDictionary:(id)a0 forBagKey:(id)a1;
+ (id)failingBagValueWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
+ (id)frozenBagValueWithKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;
+ (BOOL)_value:(id)a0 isKindOfValueType:(unsigned long long)a1;

- (void)valueWithCompletion:(id /* block */)a0;
- (id)valueWithError:(id *)a0;
- (id)_bagKeyInfo;
- (id)initWithBag:(struct shared_ptr<AMSCore::Bag> { struct Bag *x0; struct __shared_weak_count *x1; })a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (id)_processedDefaultValue:(id)a0;
- (void)_applyTransformsToValue:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (id)transformWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)valuePromise;
- (id).cxx_construct;

@end
