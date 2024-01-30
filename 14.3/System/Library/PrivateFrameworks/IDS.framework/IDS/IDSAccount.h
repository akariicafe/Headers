@class NSDate, NSSet, NSString, NSArray, NSDictionary, NSData, _IDSAccount;

@interface IDSAccount : NSObject {
    _IDSAccount *_internal;
}

@property (readonly, nonatomic) NSSet *activeAliases;
@property (readonly, nonatomic) NSString *userUniqueIdentifier;
@property (readonly, retain, nonatomic) _IDSAccount *_internal;
@property (readonly, nonatomic) BOOL isEnabled;
@property (nonatomic, setter=_setIsEnabled:) BOOL _isEnabled;
@property (readonly, nonatomic) BOOL isUsableForOuterMessaging;
@property (readonly, nonatomic) NSArray *aliasesToRegister;
@property (readonly, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) NSArray *aliasStrings;
@property (readonly, nonatomic) NSArray *vettedAliases;
@property (readonly, nonatomic) NSArray *handles;
@property (readonly, nonatomic) NSDictionary *profileInfo;
@property (retain, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) long long profileValidationStatus;
@property (readonly, nonatomic) int profileValidationErrorReason;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSArray *accountRegisteredURIs;
@property (readonly, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) NSDate *dateRegistered;
@property (readonly, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSDictionary *regionServerContext;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) BOOL isUserDisabled;
@property (retain, nonatomic) NSString *regionID;
@property (retain, nonatomic) NSString *regionBasePhoneNumber;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *loginID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *nearbyDevices;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)registerAccount;
- (void)removeDelegate:(id)a0;
- (void)addAliases:(id)a0;
- (void)setAuthToken:(id)a0;
- (void)addRegistrationDelegate:(id)a0 queue:(id)a1;
- (id)initWithDictionary:(id)a0 uniqueID:(id)a1 serviceName:(id)a2;
- (id)matchingSim;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0 uniqueID:(id)a1 serviceName:(id)a2;
- (void)updateAuthorizationCredentials:(id)a0 token:(id)a1;
- (void)updateAccountWithAccountInfo:(id)a0;
- (void)removeRegistrationDelegate:(id)a0;
- (void)passwordUpdated;
- (void)dealloc;
- (void)forceRemoveAccount;
- (void)_reregisterAndReidentify:(BOOL)a0;
- (void)deactivateAndPurgeIdentify;
- (void)_callNearbyDevicesChanged;
- (void)_reloadCachedDevices;
- (void)activateAlias:(id)a0;
- (void)deactivateAlias:(id)a0;
- (id)initWithLoginID:(id)a0 uniqueID:(id)a1 serviceName:(id)a2;
- (void)setPassword:(id)a0;
- (void)validateProfile;
- (void)unregisterAccount;
- (void)validateAliases:(id)a0;
- (void)authenticateAccount;
- (id)description;
- (void)unvalidateAliases:(id)a0;
- (void)removeAliases:(id)a0;

@end
