@class NSUUID, NSSet, NSData, NSDate;

@interface MapsSyncManagedAnonymousCredential : NSManagedObject

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) long long mapsTokenTTL;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSSet *reviewedPlaces;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
