@class NSString, NSDate;

@interface StoredBiomeMetadata : NSManagedObject

@property (nonatomic, copy) NSString *deviceLanguage;
@property (nonatomic, copy) NSString *dob;
@property (nonatomic, copy) NSString *ethnicity;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic) long long skinTone;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
