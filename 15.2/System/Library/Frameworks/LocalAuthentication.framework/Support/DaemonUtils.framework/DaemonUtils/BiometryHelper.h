@class NSMutableDictionary, NSDictionary, NSError, BKDevice;
@protocol BiometryDelegate;

@interface BiometryHelper : NSObject {
    NSMutableDictionary *_databaseHashesByUserId;
}

@property (readonly, nonatomic) NSError *fault;
@property (readonly, nonatomic) NSError *permanentError;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSDictionary *identities;
@property (readonly, nonatomic) BKDevice *device;
@property (readonly, nonatomic) long long biometryType;
@property (weak, nonatomic) id<BiometryDelegate> delegate;

+ (id)sharedInstance;
+ (id)pearlInstance;
+ (id)touchIdInstance;

- (id)biometryLostErrorForUser:(id)a0 request:(id)a1;
- (void)_clearHashes;
- (id)_protectedConfigurationForUser:(id)a0;
- (void)_setup;
- (void)resetBiometry;
- (id)lockoutErrorForState:(long long)a0 userId:(id)a1;
- (id)_lockoutErrorForExtendedState:(long long)a0 userId:(id)a1;
- (BOOL)isIdentificationEnabled:(id)a0;
- (BOOL)isEnrolled:(id)a0 error:(id *)a1;
- (id)_identitiesForUser:(id)a0;
- (id)_biolockoutStateForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (void)_setupDeviceWithDescriptor:(id)a0;
- (BOOL)deviceHasBiometryWithError:(id *)a0;
- (BOOL)isBiometryOnForApplePay:(id)a0;
- (void)_refreshIdentitiesDueToAccessoryChange:(BOOL)a0;
- (void)_setupWithPermanentError:(id)a0;
- (BOOL)_shouldRetryAvailableDevices;
- (void).cxx_destruct;
- (id)initWithBiometryType:(long long)a0;
- (id)biometryDatabaseHashForUser:(id)a0 error:(id *)a1;
- (BOOL)isAnyUserEnrolledWithError:(id *)a0;
- (BOOL)_isEnrolled:(id)a0 error:(id *)a1;
- (id)_errorNotEnrolled:(BOOL)a0;
- (BOOL)isBiometryOnForUnlock:(id)a0;
- (void)_setupWithFault:(id)a0;
- (BOOL)isLockedOutForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)userPresent:(BOOL *)a0 error:(id *)a1;
- (void)dealloc;
- (id)catacombUUID:(id)a0;
- (unsigned int)_uidFromUserId:(id)a0;

@end
