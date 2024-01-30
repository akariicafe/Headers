@class NSDictionary, BKDevice, NSMutableDictionary;

@interface BiometryHelper : NSObject {
    NSMutableDictionary *_databaseHashesByUserId;
}

@property (readonly, nonatomic, getter=isBiometryRunning) BOOL biometryRunning;
@property (readonly, nonatomic) NSDictionary *identities;
@property (readonly, nonatomic) BKDevice *device;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) BOOL hasInternalSensor;
@property (readonly, nonatomic) BOOL supportsAccessories;
@property (readonly, nonatomic) BOOL hasAccessory;
@property (readonly, nonatomic) BOOL hasAuthorizedAccessory;
@property (readonly, nonatomic) BOOL hasAuthorizedAccessoryConnected;

+ (id)sharedInstance;
+ (Class)biometricKitClassFromString:(id)a0;
+ (id)touchIdInstance;
+ (id)_enumerateAvailableDevices;
+ (BOOL)_loadBiometricKit;
+ (id)pearlInstance;

- (void)resetBiometry;
- (void).cxx_destruct;
- (BOOL)userPresent:(BOOL *)a0 error:(id *)a1;
- (unsigned int)_uidFromUserId:(id)a0;
- (void)dealloc;
- (id)_lockoutErrorForExtendedState:(long long)a0 userId:(id)a1;
- (id)catacombUUID:(id)a0;
- (BOOL)isBiometryOnForStockholm:(id)a0;
- (BOOL)_protectedConfigrationBoolForUser:(id)a0 queryBlock:(id /* block */)a1;
- (id)biometryDatabaseHashForUser:(id)a0 error:(id *)a1;
- (BOOL)isIdentificationEnabled:(id)a0;
- (id)initWithBiometryType:(long long)a0;
- (BOOL)deviceHasBiometryWithError:(id *)a0;
- (id)lockoutErrorForState:(long long)a0 userId:(id)a1;
- (BOOL)isLockedOutForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (id)_biolockoutStateForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (void)_refreshIdentities;
- (BOOL)_isEnrolled:(id)a0 error:(id *)a1;
- (void)_clearHashes;
- (id)_identitiesForUser:(id)a0;
- (BOOL)isAnyUserEnrolledWithError:(id *)a0;
- (BOOL)isBiometryOnForUnlock:(id)a0;
- (BOOL)isEnrolled:(id)a0 error:(id *)a1;

@end
