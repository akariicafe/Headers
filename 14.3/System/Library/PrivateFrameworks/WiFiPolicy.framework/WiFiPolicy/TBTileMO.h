@class NSString, NSSet, NSDate;

@interface TBTileMO : NSManagedObject <TBTile>

@property (readonly, nonatomic) unsigned long long key;
@property (readonly, copy, nonatomic) NSDate *created;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) unsigned long long networkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSString *etag;
@property (nonatomic) long long key;
@property (readonly, nonatomic) long long networkCount;
@property (retain, nonatomic) NSSet *networks;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateNewTileObjectFromMOC:(id)a0;
+ (void)removeTilesUsingPredicate:(id)a0 moc:(id)a1;
+ (void)removeAllTilesInMOC:(id)a0;


@end
