@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CRRecentContactsLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSXPCConnection *_connection;
}

+ (id)recentEventForAddress:(id)a0 displayName:(id)a1 kind:(id)a2 date:(id)a3 weight:(id)a4 metadata:(id)a5 options:(unsigned long long)a6;
+ (id /* block */)frecencyComparatorForSearch:(id)a0 preferredKinds:(id)a1 sendingAddress:(id)a2 queryOptions:(unsigned long long)a3;
+ (id /* block */)frecencyComparator;
+ (id)defaultInstance;
+ (id)os_log;
+ (id /* block */)rankedFrecencyComparatorWithPreferredSources:(id)a0;
+ (id)groupMemberWithAddress:(id)a0 displayName:(id)a1 kind:(id)a2;
+ (id)_recentEventForGroupMembers:(id)a0 displayName:(id)a1 date:(id)a2 weight:(id)a3 metadata:(id)a4 options:(unsigned long long)a5;
+ (id)apiLogDescriptionOfEvent:(id)a0;
+ (id)recentEventForAddress:(id)a0 displayName:(id)a1 kind:(id)a2 date:(id)a3;
+ (id)recentEventForAddress:(id)a0 displayName:(id)a1 kind:(id)a2 date:(id)a3 metadata:(id)a4;
+ (id)recentEventForAddress:(id)a0 displayName:(id)a1 kind:(id)a2 date:(id)a3 weight:(id)a4 metadata:(id)a5;
+ (id)explicitGroupEventForGroupMembers:(id)a0 displayName:(id)a1 date:(id)a2 metadata:(id)a3 options:(unsigned long long)a4;
+ (id /* block */)frecencyComparatorForSearch:(id)a0 preferredKinds:(id)a1 sendingAddress:(id)a2;

- (void)recordContactEvents:(id)a0 recentsDomain:(id)a1 sendingAddress:(id)a2 completion:(id /* block */)a3;
- (BOOL)removeRecentContacts:(id)a0 error:(out id *)a1;
- (void)start;
- (id)_newConnection;
- (id)init;
- (void)performRecentsSearch:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)recordContactEvents:(id)a0 recentsDomain:(id)a1 sendingAddress:(id)a2 source:(id)a3 userInitiated:(BOOL)a4;
- (id)_recentContactsWithQuery:(id)a0;
- (BOOL)removeRecentContactsWithRecentIDs:(id)a0 recentsDomain:(id)a1 error:(out id *)a2;
- (id)_searchRecentsUsingQuery:(id)a0;
- (id)_remoteLibraryWithErrorHandler:(id /* block */)a0;
- (void)_searchRecentsUsingQuery:(id)a0 completion:(id /* block */)a1;
- (id)_searchRecentsUsingQuery:(id)a0 error:(id *)a1;
- (void)_recordContactEvents:(id)a0 recentsDomain:(id)a1 sendingAddress:(id)a2 source:(id)a3 userInitiated:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)_removeRecentContactsWithRecentIDs:(id)a0 syncKeys:(id)a1 recentsDomain:(id)a2 error:(out id *)a3;
- (unsigned long long)maxDateEventsPerRecentContact;
- (void)setImplicitGroupThreshold:(unsigned long long)a0 forDomain:(id)a1;
- (void)requestRecentsUsingPredicate:(id)a0 inDomains:(id)a1 comparator:(id /* block */)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)performRecentsSearch:(id)a0 operationQueue:(id)a1 completion:(id /* block */)a2;
- (id)copyOrderedRecentsForSearchText:(id)a0 recentsDomain:(id)a1 sendingAddress:(id)a2 kinds:(id)a3;
- (id)copyRecentsForDomain:(id)a0;
- (void)recordContactEvents:(id)a0 recentsDomain:(id)a1 sendingAddress:(id)a2;
- (void)recordContactEvents:(id)a0 recentsDomain:(id)a1 sendingAddress:(id)a2 userInitiated:(BOOL)a3;
- (void)_removeAllRecentContactsWithCompletion:(id /* block */)a0;
- (id)_removeRecentContactsMatchingQuery:(id)a0;
- (int)_daemonProcessID;

@end
