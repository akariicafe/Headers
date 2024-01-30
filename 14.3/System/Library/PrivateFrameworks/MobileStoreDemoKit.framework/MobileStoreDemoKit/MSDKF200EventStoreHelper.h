@class NSPersistentContainer, NSManagedObjectContext, NSArray;

@interface MSDKF200EventStoreHelper : NSObject

@property (retain) NSPersistentContainer *container;
@property (retain) NSManagedObjectContext *context;
@property (retain) NSArray *eventsToReport;

+ (id)sharedInstance;
+ (id)requiredKeysInEvent;

- (id)init;
- (void).cxx_destruct;
- (BOOL)prepareContainerFolder;
- (void)saveEventInPersistentStore:(id)a0;
- (id)buildEventsInfoFromEventEntities:(id)a0;
- (void)fetchEventsFromPersistentStoreWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (long long)thresholdTimestampForOutdatedEvent;
- (void)deleteEventsFromPersistentStoreWithReuqest:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveEvent:(id)a0;
- (void)fetchEventsWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 fetchOffset:(unsigned long long)a2 completionHanlder:(id /* block */)a3;
- (id)fetchUncommitedEventsForPing;
- (void)markLastF200EventPingAsCommitted:(BOOL)a0;
- (void)purgeOutdatedEvents;

@end
