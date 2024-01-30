@class NSUUID, NSDate;

@interface MapsSyncManagedCuratedCollection : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
