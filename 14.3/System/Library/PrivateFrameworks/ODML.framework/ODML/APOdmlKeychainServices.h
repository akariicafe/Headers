@interface APOdmlKeychainServices : NSObject

+ (id)allowedClasses;
+ (void)_removeObjectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0 error:(id *)a1;
+ (id)_readDataFromKeychain:(id)a0;
+ (void)_writeDataToKeychain:(id)a0 andData:(id)a1;
+ (id)_keychainQuery:(id)a0;

@end
