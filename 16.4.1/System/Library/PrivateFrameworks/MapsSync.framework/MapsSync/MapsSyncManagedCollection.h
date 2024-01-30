@class NSString, NSUUID, NSData, NSDate, NSSet;

@interface MapsSyncManagedCollection : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSSet *places;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
