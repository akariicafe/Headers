@class NSUUID, MapsSyncManagedAnonymousCredential, NSData, NSDate, NSNumber;

@interface MapsSyncManagedReviewedPlace : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long muid;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) short version;
@property (nonatomic, retain) MapsSyncManagedAnonymousCredential *anonymousCredential;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
