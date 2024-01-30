@class CDDClientConnection;

@interface CDSession : NSObject

@property (readonly) CDDClientConnection *cddClientConnection;
@property (readonly) unsigned long long clientId;
@property BOOL unlocked;

+ (id)sharedSessionWithClientId:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientId:(unsigned long long)a0;
- (id)getDevicesInternal;
- (id)attributeNamesWithError:(id *)a0;
- (id)getDevices;
- (id)budgetNamesWithError:(id *)a0;
- (id)attributeForName:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)initWithClientId:(unsigned long long)a0 enableCaching:(BOOL)a1;
- (id)attributeForName:(id)a0 type:(long long)a1 clientId:(unsigned long long)a2 error:(id *)a3;
- (id)budgetForName:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)registerAttributeWithName:(id)a0 type:(long long)a1 dataProtectionClass:(id)a2 error:(id *)a3;
- (id)registerBudgetWithName:(id)a0 value:(long long)a1 type:(long long)a2 error:(id *)a3;
- (id)attributeFromFullname:(id)a0 error:(id *)a1;
- (id)registerBudgetWithName:(id)a0 value:(long long)a1 type:(long long)a2 withOptions:(unsigned long long)a3 error:(id *)a4;
- (BOOL)deleteClientDataWithError:(id *)a0;
- (id)representationStringFromAttribute:(id)a0 value:(id)a1 error:(id *)a2;
- (id)attributeFromRepresentation:(id)a0 error:(id *)a1;
- (id)representationStringFromAttribute:(id)a0 value:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)registerForDeviceChanges;
- (id)attributeExtendedComponentsFromRepresentation:(id)a0 error:(id *)a1;
- (id)copyDevicesUncached;
- (id)attributeComponentsFromRepresentation:(id)a0 error:(id *)a1;
- (id)getDeviceFromDescription:(id)a0 error:(id *)a1;
- (BOOL)setDevicesChangedHandlerWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)broadcastSystemDataWithError:(id *)a0;
- (BOOL)setNonAppBundleIdWithError:(id)a0 error:(id *)a1;
- (BOOL)setNonAppBundlIdWithError:(id)a0 error:(id *)a1;
- (BOOL)setActiveComplications:(id)a0 error:(id *)a1;
- (BOOL)setGlancesLingeredOn:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)isClassCLocked;

@end
