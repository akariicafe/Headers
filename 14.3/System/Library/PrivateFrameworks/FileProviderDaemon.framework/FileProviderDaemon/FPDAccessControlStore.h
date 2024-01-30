@class PQLConnection, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FPDAccessControlStore : NSObject {
    PQLConnection *_dbConnection;
    NSURL *_databaseBaseURL;
    BOOL _dbIsOpen;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)sharedStore;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)openDatabase;
- (id)initWithDatabaseBaseURL:(id)a0;
- (void)validateDatabase:(id)a0;
- (void)performWithDBConnection:(id /* block */)a0;
- (void)reopenDatabaseAfterUnlock;
- (id)keyForBundleIdentifier:(id)a0 generateIfNotFound:(BOOL)a1 keyGenBlock:(id /* block */)a2;
- (id)bookmarkForItemID:(id)a0 consumerIdentifier:(id)a1;
- (id)verifyBookmark:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 consumerIdentifier:(id)a2;
- (id)parseUnverifiedBookmark:(id)a0;
- (BOOL)lookupLRUSignature:(id)a0;
- (void)addLRUSignature:(id)a0;

@end
