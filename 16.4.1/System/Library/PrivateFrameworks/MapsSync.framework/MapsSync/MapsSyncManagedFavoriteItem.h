@class NSString, NSUUID, NSSet, NSDate, NSNumber, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedFavoriteItem : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSSet *contactHandles;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
