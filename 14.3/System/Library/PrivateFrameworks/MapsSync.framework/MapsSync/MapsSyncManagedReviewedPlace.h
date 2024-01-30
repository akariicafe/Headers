@class NSUUID, MapsSyncManagedAnonymousCredential, NSDate;

@interface MapsSyncManagedReviewedPlace : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long muid;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) MapsSyncManagedAnonymousCredential *anonymousCredential;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
