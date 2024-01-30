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

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
