@class NSString, NSDictionary, NSArray;

@interface MCGmailAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol>

@property (readonly, retain, nonatomic) NSString *accountDescription;
@property (readonly, retain, nonatomic) NSString *accountName;
@property (readonly, retain, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules;
@property (retain, nonatomic) NSString *acAccountIdentifier;
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
- (BOOL)mustInstallNonInteractively;
- (id)restrictions;

@end
