@class HDKeyValueDomain;

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface> {
    HDKeyValueDomain *_keyValueDomain;
}

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (Class)configurationClass;

- (void)remote_numberForKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_allValuesWithCompletion:(id /* block */)a0;
- (void)remote_stringForKey:(id)a0 completion:(id /* block */)a1;
- (void)remote_setValueForAllKeys:(id)a0 completion:(id /* block */)a1;
- (void)remote_setString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)remote_setNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)remote_dataForKey:(id)a0 completion:(id /* block */)a1;
- (void)_unitTest_overrideKeyValueDomainCategory:(long long)a0;
- (void)remote_dateForKey:(id)a0 completion:(id /* block */)a1;
- (void)remote_setValuesWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)remote_setData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)remote_removeValuesForKeys:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (void)remote_setDate:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
