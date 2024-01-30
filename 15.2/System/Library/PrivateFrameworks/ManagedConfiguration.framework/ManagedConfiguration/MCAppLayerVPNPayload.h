@class NSString, NSArray;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase

@property (retain, nonatomic) NSString *VPNUUID;
@property (retain, nonatomic) NSArray *SafariDomains;
@property (retain, nonatomic) NSArray *SMBDomains;
@property (retain, nonatomic) NSArray *mailDomains;
@property (retain, nonatomic) NSArray *calendarDomains;
@property (retain, nonatomic) NSArray *contactsDomains;
@property (retain, nonatomic) NSArray *excludedDomains;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (readonly, nonatomic) BOOL restrictDomains;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
