@class CalDatabaseInMemoryChangeTracking, NSHashTable;

@interface CalInMemoryTrackedDatabase : NSObject

@property (readonly, nonatomic) CalDatabaseInMemoryChangeTracking *database;
@property (readonly, nonatomic) NSHashTable *clients;
@property (readonly, nonatomic) BOOL hasClients;

- (id)init;
- (void).cxx_destruct;

@end
