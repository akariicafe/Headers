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

+ (id)serverInterface;
+ (id)healthAppDefaultsDomainWithHealthStore:(id)a0;
+ (id)healthArticlesDefaultsDomainWithHealthStore:(id)a0;
+ (id)safetyDefaultsDomainWithHealthStore:(id)a0;
+ (id)clientInterface;
+ (id)heartRhythmDefaultsDomainWithHealthStore:(id)a0;

- (void)connectionInvalidated;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (id)remoteInterface;
- (id)initWithCategory:(long long)a0 domainName:(id)a1 healthStore:(id)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_dataWithErrorNoDataForKey:(id)a0 error:(id *)a1;
- (id)_dateWithErrorNoDataForKey:(id)a0 error:(id *)a1;
- (id)_stringWithErrorNoDataForKey:(id)a0 error:(id *)a1;
- (id)_numberWithErrorNoDataForKey:(id)a0 error:(id *)a1;
- (id)_propertyListValueWithErrorNoDataForKey:(id)a0 error:(id *)a1;
- (id)exportedInterface;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (id)_dataFromPropertyListValue:(id)a0 error:(id *)a1;
- (id)_propertyListValueFromData:(id)a0 error:(id *)a1;
- (BOOL)setNumber:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setDate:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setDate:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setString:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setValueForAllKeys:(id)a0 completion:(id /* block */)a1;
- (BOOL)setPropertyListValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setPropertyListValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setValuesWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)removeValuesForKeys:(id)a0 completion:(id /* block */)a1;
- (void)numberForKey:(id)a0 completion:(id /* block */)a1;
- (void)dataForKey:(id)a0 completion:(id /* block */)a1;
- (id)dateForKey:(id)a0 error:(id *)a1;
- (void)dateForKey:(id)a0 completion:(id /* block */)a1;
- (void)stringForKey:(id)a0 completion:(id /* block */)a1;
- (id)propertyListValueForKey:(id)a0 error:(id *)a1;
- (void)propertyListValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)allValuesWithCompletion:(id /* block */)a0;

@end
