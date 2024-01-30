@class NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator;

@interface RKRankingDataManager : NSObject

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) NSPersistentStore *persistentStore;

- (void).cxx_destruct;
- (id)initWithLanguageID:(id)a0;
- (id)initWithDatabaseFilename:(id)a0;
- (void)insertRankingInfoFromDictionary:(id)a0;
- (id)fetchRankingInfoForCategory:(id)a0;
- (void)flushRankingData;
- (void)pruneUserDatabase;
- (void)insertRankingInfoFromDictionary:(id)a0 withDate:(id)a1;
- (id)fetchRankingInfoFromDB;
- (unsigned long long)getNumberOfEntriesInDB;
- (void)resetRankingData;

@end
