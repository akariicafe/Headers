@class NSNumber, NSData;

@interface MCChaperonePayload : MCPayload

@property (readonly, nonatomic) NSNumber *nonChaperonePairingAllowedNum;
@property (readonly, retain, nonatomic) NSData *pairingCertificateData;
@property (readonly, nonatomic) BOOL nonChaperonePairingAllowed;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
