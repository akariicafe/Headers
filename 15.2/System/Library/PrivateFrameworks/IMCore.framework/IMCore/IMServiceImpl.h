@class NSArray, NSDictionary, NSString, NSData, IMAccount;

@interface IMServiceImpl : IMService {
    NSString *_localizedName;
    IMAccount *_bestAccount;
    NSData *_imageData;
    NSArray *_siblingServiceNames;
    BOOL _hasLoadedServiceProperties;
    BOOL _supportsSMS;
    BOOL _supportsDatabaseStorage;
    BOOL _shouldInternationalizeNumbers;
    NSArray *_abProperties;
    NSDictionary *_serviceProps;
}

@property (readonly, nonatomic) BOOL _wantsInternationizedNumbers;
@property (readonly, nonatomic) BOOL _supportsDatabaseStorage;
@property (retain, nonatomic) NSDictionary *serviceDefaults;
@property (readonly, nonatomic) NSArray *accountIDs;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL handlesChatInvites;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *internalName;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (retain, nonatomic) NSDictionary *defaultAccountSettings;
@property (readonly, nonatomic) BOOL supportsAdding;
@property (readonly, nonatomic) BOOL supportsPresence;
@property (readonly, nonatomic) BOOL supportsGroupAttachments;
@property (readonly, nonatomic) BOOL supportsMutatingGroupMembers;
@property (readonly, nonatomic) BOOL supportsOneSessionForAllAccounts;
@property (readonly, nonatomic) BOOL supportsRegistration;
@property (readonly, nonatomic) BOOL supportsAuthorization;
@property (readonly, nonatomic) BOOL supportsPhoneNumberMapping;
@property (readonly, nonatomic) BOOL supportsIDStatusLookup;
@property (readonly, nonatomic) BOOL supportsOfflineTransfers;
@property (readonly, nonatomic) BOOL supportsAudioMessages;
@property (readonly, nonatomic) BOOL isPersistent;
@property (readonly, nonatomic) BOOL ignoresNetworkConnectivity;
@property (readonly, nonatomic) long long maxAttachmentSize;
@property (readonly, nonatomic) unsigned int IDSensitivity;
@property (readonly, nonatomic) BOOL shouldDisableDeactivation;
@property (readonly, nonatomic) NSArray *siblingServices;
@property (readonly, nonatomic) BOOL isPlugInService;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic) NSArray *emailDomains;
@property (readonly, nonatomic) BOOL allowsMultipleConnections;
@property (readonly, nonatomic) long long buddyNotesMaxByteLength;
@property (readonly, nonatomic) NSData *serviceImageData;
@property (readonly, nonatomic) NSArray *addressBookProperties;
@property (readonly, nonatomic) NSString *addressBookProperty;
@property (readonly, nonatomic) Class accountClass;

+ (BOOL)_isLastAddressedHandleSubscriptionActive:(id)a0;
+ (id)activeServices;
+ (BOOL)mmsEnabled;
+ (id)serviceWithName:(id)a0;
+ (void)setServiceClass:(Class)a0;
+ (Class)serviceClass;
+ (BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)a0 simID:(id)a1 previousService:(id)a2;
+ (BOOL)_isSIMIdIDSRegisteredSIM:(id)a0;
+ (id)allServicesNonBlocking;
+ (id)_phoneNumberOnSubscriptionWithSIMID:(id)a0;
+ (id)connectedServicesWithCapability:(unsigned long long)a0;
+ (id)allServices;
+ (BOOL)iMessageEnabled;
+ (id)servicesWithCapability:(unsigned long long)a0;
+ (BOOL)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)a0 simID:(id)a1 previousService:(id)a2;
+ (BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)a0 simID:(id)a1;
+ (id)supportedCountryCodes;
+ (BOOL)mmsEnabledforPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)_readMMSUserOverride;
+ (BOOL)systemSupportsSMSSending;
+ (BOOL)_deviceIsAltAccount;
+ (BOOL)smsEnabled;
+ (BOOL)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)a0 previousService:(id)a1;
+ (id)serviceWithInternalName:(id)a0;
+ (BOOL)hasAlias:(id)a0 onAccountForService:(id)a1;
+ (id)connectedServices;
+ (id)operationalServicesWithCapability:(unsigned long long)a0;
+ (BOOL)systemSupportsSendingAttachmentsOfTypes:(id)a0 error:(long long *)a1;
+ (BOOL)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)a0;

- (long long)compareNames:(id)a0;
- (id)canonicalFormOfID:(id)a0;
- (void)_syncWithRemoteBuddies;
- (BOOL)equalID:(id)a0 andID:(id)a1;
- (id)localizedShortName;
- (id)localizedName;
- (id)infoForScreenName:(id)a0;
- (void)_blockUntilInitialSyncPerformed;
- (void)activeAccountsChanged:(id)a0;
- (unsigned long long)status;
- (BOOL)isEnabled;
- (void)disconnect;
- (BOOL)initialSyncPerformed;
- (void)_loadPropertiesIfNeeded;
- (id)description;
- (id)infoForPreferredScreenNames;
- (void)_calculateBestAccount;
- (id)normalizedFormOfID:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)statusChangedForAccount:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)myScreenNames;
- (void)doneSetup;
- (void)defaultsChanged:(id)a0;
- (id)subtypeInformationForAccount:(id)a0;
- (void)dealloc;
- (long long)maxChatParticipantsForHandle:(id)a0 simID:(id)a1;
- (id)infoForAllScreenNames;

@end
