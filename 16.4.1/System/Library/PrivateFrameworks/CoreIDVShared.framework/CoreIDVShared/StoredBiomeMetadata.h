@class NSString;

@interface StoredBiomeMetadata : NSManagedObject

@property (nonatomic, copy) NSString *deviceLanguage;
@property (nonatomic, copy) NSString *dob;
@property (nonatomic, copy) NSString *ethnicity;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic) long long gestureAssessment;
@property (nonatomic, copy) NSString *issuer;
@property (nonatomic) long long livenessAssessment;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic) BOOL shouldDonateProofingDecision;
@property (nonatomic) long long skinTone;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
