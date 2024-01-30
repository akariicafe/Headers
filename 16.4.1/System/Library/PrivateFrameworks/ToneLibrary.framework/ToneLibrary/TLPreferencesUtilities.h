@interface TLPreferencesUtilities : NSObject

+ (struct __CFString { } *)preferencesDomain;
+ (struct __CFString { } *)copySharedResourcesPreferencesDomainForDomain:(struct __CFString { } *)a0;
+ (id)perWatchPreferencesDomain;
+ (BOOL)canAccessNanoRegistry;
+ (BOOL)_valueForEntitlement:(id)a0 task:(struct __SecTask { } *)a1;
+ (struct __CFString { } *)copySharedResourcesPreferencesDomain;
+ (void)migratePerTopicPreferencesInDomain:(struct __CFString { } *)a0 withRegularPreferenceKeys:(const id *)a1 regularPreferenceKeysCount:(unsigned long long)a2 intoSinglePerTopicPreferenceWithSuffix:(id)a3 usingPreferencesScope:(int)a4;
+ (struct __CFDictionary { } *)_copyAllKeysAndValuesFromDomain:(struct __CFString { } *)a0 usingPreferencesScope:(int)a1;
+ (void)_synchronizeDomain:(struct __CFString { } *)a0 usingPreferencesScope:(int)a1;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)a0 inDomain:(struct __CFString { } *)a1 usingPreferencesScope:(int)a2 withBlock:(id /* block */)a3;
+ (id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id *)a0 regularPreferenceKeysCount:(unsigned long long)a1;
+ (void)_setValue:(void *)a0 forKey:(struct __CFString { } *)a1 inDomain:(struct __CFString { } *)a2 usingPreferencesScope:(int)a3;

@end
