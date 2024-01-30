@protocol PDSCDCache, PDSEntryStoreDelegate;

@interface PDSEntryStore : NSObject

@property (retain, nonatomic) id<PDSCDCache> cache;
@property (weak, nonatomic) id<PDSEntryStoreDelegate> delegate;

- (id)entries;
- (id)activeUsers;
- (id)entriesWithClientID:(id)a0;
- (BOOL)updateEntryState:(unsigned char)a0 forUser:(id)a1 clientID:(id)a2 withError:(id *)a3;
- (id)usersWithClientID:(id)a0;
- (id)entriesForUser:(id)a0 withClientID:(id)a1;
- (BOOL)updateAllEntriesWithState:(unsigned char)a0 toState:(unsigned char)a1 withError:(id *)a2;
- (BOOL)_permitTransitionFromState:(unsigned char)a0 toState:(unsigned char)a1;
- (BOOL)storeEntries:(id)a0 deleteEntries:(id)a1 withError:(id *)a2;
- (id)activeUsersWithClientID:(id)a0;
- (BOOL)hasPendingEntries;
- (BOOL)deleteEntry:(id)a0 withError:(id *)a1;
- (id)entriesForUser:(id)a0;
- (BOOL)storeEntry:(id)a0 withError:(id *)a1;
- (BOOL)deleteEntriesForUser:(id)a0 withState:(unsigned char)a1 withError:(id *)a2;
- (BOOL)hasActiveEntries;
- (void).cxx_destruct;
- (id)users;
- (id)initWithCache:(id)a0;

@end
