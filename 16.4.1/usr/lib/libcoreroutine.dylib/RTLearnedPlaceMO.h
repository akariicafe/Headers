@class NSString, NSSet, NSData, RTMapItemMO, NSNumber;
@protocol GEOMapItem;

@interface RTLearnedPlaceMO : RTCloudManagedObject

@property (retain, nonatomic) id<GEOMapItem> mapItemGeoMapItem;
@property (retain, nonatomic) NSData *mapItemGeoMapItemHandle;
@property (copy, nonatomic) NSNumber *mapItemSource;
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *typeSource;
@property (retain, nonatomic) NSSet *visits;
@property (retain, nonatomic) RTMapItemMO *mapItem;

+ (id)fetchRequestSortedByCreation;
+ (id)fetchRequest;
+ (id)managedObjectWithPlace:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithPlace:(id)a0 inManagedObjectContext:(id)a1;

- (void)didSave;

@end
