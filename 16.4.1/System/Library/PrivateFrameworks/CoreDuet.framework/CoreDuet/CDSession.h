@interface CDSession : NSObject

@property (readonly) unsigned long long clientId;
@property BOOL unlocked;

+ (id)sharedSessionWithClientId:(unsigned long long)a0;

- (BOOL)isClassCLocked;
- (id)init;
- (id)initWithClientId:(unsigned long long)a0 enableCaching:(BOOL)a1;
- (id)attributeForName:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)attributeNamesWithError:(id *)a0;
- (id)budgetForName:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)budgetNamesWithError:(id *)a0;
- (id)getDevices;
- (id)initWithClientId:(unsigned long long)a0;
- (id)registerAttributeWithName:(id)a0 type:(long long)a1 dataProtectionClass:(id)a2 error:(id *)a3;
- (id)representationStringFromAttribute:(id)a0 value:(id)a1 error:(id *)a2;

@end
