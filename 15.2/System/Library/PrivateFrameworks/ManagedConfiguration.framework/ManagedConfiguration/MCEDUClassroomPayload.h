@class CRKEDUPayload, NSString, NSDictionary, NSData, NSArray;

@interface MCEDUClassroomPayload : MCPayload

@property (retain, nonatomic) CRKEDUPayload *crk_payload;
@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSString *payloadCertificateUUID;
@property (retain, nonatomic) NSData *payloadCertificatePersistentID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (copy, nonatomic) NSString *resourcePayloadCertificateUUID;
@property (retain, nonatomic) NSData *resourcePayloadCertificatePersistentID;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)translatedCRKError:(id)a0;

@end
