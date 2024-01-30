@class NSArray, PDSEntryStore, PDSUserTracker;

@interface PDSDaemonListener : NSObject <PDSRemote>

@property (retain, nonatomic) NSArray *clientIDs;
@property (retain, nonatomic) PDSEntryStore *entryStore;
@property (retain, nonatomic) PDSUserTracker *userTracker;
@property (readonly, nonatomic) BOOL bypassClientIDCheck;

- (void)usersWithClientID:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithClientIDs:(id)a0 entryStore:(id)a1 userTracker:(id)a2;
- (void)batchUpdateEntries:(id)a0 forClientID:(id)a1 withCompletion:(id /* block */)a2;
- (void)removeAllEntriesForUser:(id)a0 withClientID:(id)a1 withCompletion:(id /* block */)a2;
- (void)storeEntries:(id)a0 deleteEntries:(id)a1 withCompletion:(id /* block */)a2;
- (void)activeUsersWithClientID:(id)a0 withCompletion:(id /* block */)a1;
- (void)entriesForClientID:(id)a0 withCompletion:(id /* block */)a1;
- (void)entriesForUser:(id)a0 clientID:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithEntryStore:(id)a0 userTracker:(id)a1;

@end
