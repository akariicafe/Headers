@class NSString, HKHealthStore, NSUUID, HKTaskServerProxyProvider;

@interface HKKeyValueDomain : NSObject <_HKXPCExportable> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *domainName;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)healthArticlesDefaultsDomainWithHealthStore:(id)a0;
+ (id)clientInterface;
+ (id)safetyDefaultsDomainWithHealthStore:(id)a0;
+ (id)serverInterface;
+ (id)healthAppDefaultsDomainWithHealthStore:(id)a0;
+ (id)heartRhythmDefaultsDomainWithHealthStore:(id)a0;

- (void)connectionInvalidated;
- (void)setPropertyListValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)propertyListValueForKey:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)allValuesWithCompletion:(id /* block */)a0;
- (id)_dataFromPropertyListValue:(id)a0 error:(id *)a1;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (id)remoteInterface;
- (id)dateForKey:(id)a0 error:(id *)a1;
- (void)numberForKey:(id)a0 completion:(id /* block */)a1;
- (id)_propertyListValueFromData:(id)a0 error:(id *)a1;
- (BOOL)setNumber:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setValueForAllKeys:(id)a0 completion:(id /* block */)a1;
- (void)removeValuesForKeys:(id)a0 completion:(id /* block */)a1;
- (void)setNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setValuesWithDictionary:(id)a0 completion:(id /* block */)a1;
- (id)initWithCategory:(long long)a0 domainName:(id)a1 healthStore:(id)a2;
- (id)propertyListValueForKey:(id)a0 error:(id *)a1;
- (void)setString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)exportedInterface;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (void)setDate:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)stringForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)setString:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)dateForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)setPropertyListValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)setDate:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)invalidate;

@end
