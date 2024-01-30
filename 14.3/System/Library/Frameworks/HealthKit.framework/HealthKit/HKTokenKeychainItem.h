@class NSString;

@interface HKTokenKeychainItem : NSObject

@property (readonly, copy, nonatomic) NSString *name;

+ (id)_fetchTokenIdentifiedByName:(id)a0 error:(id *)a1;
+ (BOOL)_storeTokenIdentifiedByName:(id)a0 data:(id)a1 error:(out id *)a2;
+ (BOOL)_deleteTokenIdentifiedByName:(id)a0 error:(out id *)a1;
+ (id)tokenKeychainItemSecurityClass;
+ (id)_identifyingAttributesForKeyIdentifiedByName:(id)a0;
+ (id)_keyQueryAttributesForKeyIdentifiedByName:(id)a0;
+ (id)_storableAttributesForKeyIdentifiedByName:(id)a0 data:(id)a1 modificationDate:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)a0;
- (id)fetchWithError:(id *)a0;
- (BOOL)storeToken:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0;

@end
