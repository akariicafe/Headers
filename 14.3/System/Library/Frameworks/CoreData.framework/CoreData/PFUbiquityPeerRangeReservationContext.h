@class NSPersistentStore, NSPersistentStoreCoordinator, NSArray, NSMutableDictionary, NSMutableArray, NSManagedObjectContext;

@interface PFUbiquityPeerRangeReservationContext : NSObject {
    NSMutableDictionary *_globalIDToLocalURI;
    NSMutableArray *_unresolvedGlobalObjectIDs;
    NSMutableDictionary *_storeNameToFetchedMetadata;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *psc;
@property (readonly, nonatomic) NSPersistentStore *store;
@property (readonly, nonatomic) NSManagedObjectContext *moc;
@property (readonly, nonatomic) NSArray *globalObjectIDs;
@property (readonly, nonatomic) long long numRangesToReserve;
@property (readonly, nonatomic) NSMutableDictionary *peerEntityNameRangeStartSet;

- (id)init;
- (void)dealloc;
- (id)initWithPersistentStore:(id)a0 andGlobalObjectIDs:(id)a1;
- (BOOL)createNewPeerRangesWithCache:(id)a0 Error:(id *)a1;
- (void)prepareForRangeReservationWithRangeStart:(id)a0 andGlobalID:(id)a1 andEntityName:(id)a2;
- (id)createLocalIDStringForStoreUUID:(id)a0 entityName:(id)a1 andPrimaryKeyString:(id)a2;

@end
