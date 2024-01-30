@class NSMutableDictionary, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface CLSEIEventsDataManager : NSObject {
    NSManagedObjectContext *_managedObjectContext;
}

@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSURL *diskCacheURL;
@property (readonly, nonatomic) NSMutableDictionary *venueCache;
@property (readonly, nonatomic) NSMutableDictionary *artistCache;
@property (readonly, nonatomic) NSMutableDictionary *categoryCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

- (BOOL)_save;
- (id)managedObjectContext;
- (BOOL)save;
- (void)clear;
- (void).cxx_destruct;
- (id)_fetchManagedObjectWithEntityName:(id)a0 name:(id)a1;
- (id)_fetchManagedObjectWithEntityName:(id)a0 uuid:(long long)a1;
- (void)_resetCoreDataStack;
- (void)clearFastAccessCache;
- (id)fetchArtistForUUID:(long long)a0;
- (id)fetchCategoryForName:(id)a0;
- (id)fetchEventForUUID:(long long)a0;
- (id)fetchVenueForUUID:(long long)a0;
- (id)initWithDiskCacheURL:(id)a0;
- (id)insertArtistWithUUID:(long long)a0 name:(id)a1;
- (id)insertCategoryWithName:(id)a0;
- (id)insertEventWithUUID:(long long)a0 name:(id)a1;
- (id)insertVenueWithUUID:(long long)a0 name:(id)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;

@end
