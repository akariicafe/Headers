@interface WAUtil : NSObject

+ (id)deviceName;
+ (id)unobscureModelData:(id)a0 forModelkey:(id)a1;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (id)getObscureKey;
+ (id)_getBasePersistenceKeychainQuery;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (id)groupTypeToString:(long long)a0;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (id)rotateObscureKey;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)getTokenForIdentifier:(id)a0;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (id)trimTokenForLogging:(id)a0;
+ (id)groupTypeToAWDComponentID;
+ (unsigned long long)getAWDTimestamp;

@end
