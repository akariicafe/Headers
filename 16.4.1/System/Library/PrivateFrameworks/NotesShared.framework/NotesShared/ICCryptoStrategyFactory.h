@interface ICCryptoStrategyFactory : NSObject

+ (long long)cipherVersionForObject:(id)a0;
+ (BOOL)objectNeedsMigration:(id)a0;
+ (BOOL)shouldAuthenticateWithCustomPasswordForObject:(id)a0;
+ (BOOL)shouldAuthenticateWithDevicePasswordForObject:(id)a0;
+ (long long)cipherVersionForPrimaryEncryptedData:(id)a0;
+ (id)makeCryptoStrategyForObject:(id)a0 andValidateProtocolConformance:(id)a1;
+ (id)makeCryptoStrategyForObject:(id)a0 withCipherMatchingEncryptedData:(id)a1 andValidateProtocolConformance:(id)a2;
+ (id)primaryEncryptedDataForObject:(id)a0;
+ (id)strategyForObject:(id)a0 cipherVersion:(long long)a1;
+ (id)unitTest_strategyForObject:(id)a0 cipherVersion:(long long)a1;
+ (long long)userSelectedCipherVersionForObject:(id)a0;

@end
