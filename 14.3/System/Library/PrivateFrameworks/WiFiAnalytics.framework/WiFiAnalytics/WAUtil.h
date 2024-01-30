@interface WAUtil : NSObject

+ (id)deviceName;
+ (id)groupTypeToAWDComponentID;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)_getBasePersistenceKeychainQuery;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (id)rotateObscureKey;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)getObscureKey;
+ (id)unobscureModelData:(id)a0 forModelkey:(id)a1;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (unsigned long long)getAWDTimestamp;
+ (id)groupTypeToString:(long long)a0;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (id)getTokenForIdentifier:(id)a0;
+ (id)trimTokenForLogging:(id)a0;

@end
