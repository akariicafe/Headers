@class NSNumber, NSData;

@interface MCChaperonePayload : MCPayload

@property (readonly, nonatomic) NSNumber *nonChaperonePairingAllowedNum;
@property (readonly, retain, nonatomic) NSData *pairingCertificateData;
@property (readonly, nonatomic) BOOL nonChaperonePairingAllowed;

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
- (id)subtitle2Description;

@end
