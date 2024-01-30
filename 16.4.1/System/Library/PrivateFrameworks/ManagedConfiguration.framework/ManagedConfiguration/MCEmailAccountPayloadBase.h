@class NSString, NSArray, NSData, NSNumber;

@interface MCEmailAccountPayloadBase : MCPayload <MCPerAccountVPNPayloadProtocol>

@property (retain, nonatomic) NSNumber *preventMoveNum;
@property (retain, nonatomic) NSNumber *preventAppSheetNum;
@property (retain, nonatomic) NSNumber *SMIMEEnabledNum;
@property (retain, nonatomic) NSNumber *isRecentsSyncingDisabledNum;
@property (retain, nonatomic) NSNumber *isMailDropEnabledNum;
@property (retain, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum;
@property (nonatomic) BOOL preventMove;
@property (nonatomic) BOOL preventAppSheet;
@property (nonatomic) BOOL SMIMEEnabled;
@property (nonatomic) BOOL isRecentsSyncingDisabled;
@property (nonatomic) BOOL isMailDropEnabled;
@property (retain, nonatomic) NSNumber *SMIMESigningEnabled;
@property (nonatomic) BOOL SMIMESigningUserOverrideable;
@property (retain, nonatomic) NSString *SMIMESigningIdentityUUID;
@property (retain, nonatomic) NSNumber *SMIMEEncryptionEnabled;
@property (nonatomic) BOOL SMIMEEncryptByDefaultUserOverrideable;
@property (retain, nonatomic) NSString *SMIMEEncryptionIdentityUUID;
@property (retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;
@property (nonatomic) BOOL SMIMESigningIdentityUserOverrideable;
@property (retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;
@property (nonatomic) BOOL SMIMEEncryptionIdentityUserOverrideable;
@property (nonatomic) BOOL SMIMEPerMessageSwitchEnabled;
@property (readonly, retain, nonatomic) NSString *VPNUUID;
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;

- (void).cxx_destruct;
- (id)verboseDescription;
- (void)addSMIMEEncryptionPayloadKeysTo:(id)a0;
- (BOOL)containsSensitiveUserInformation;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
