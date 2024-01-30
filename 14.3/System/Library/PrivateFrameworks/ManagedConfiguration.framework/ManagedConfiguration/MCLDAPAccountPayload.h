@class NSString, NSArray, NSDictionary, NSNumber;

@interface MCLDAPAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol>

@property (readonly, nonatomic) NSNumber *useSSLNum;
@property (readonly, retain, nonatomic) NSString *accountDescription;
@property (readonly, retain, nonatomic) NSString *hostname;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;
@property (readonly, retain, nonatomic) NSArray *searchSettings;
@property (readonly, nonatomic) BOOL useSSL;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules;
@property (retain, nonatomic) NSString *acAccountIdentifier;
@property (copy, nonatomic) NSString *accountPersistentUUID;
@property (readonly, retain, nonatomic) NSString *VPNUUID;
@property (readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;
@property (readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (BOOL)containsSensitiveUserInformation;
- (id)subtitle2Description;
- (id)restrictions;

@end
