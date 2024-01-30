@class NSSManager, ACAccountStore, NSObject, ACAccount;
@protocol OS_dispatch_queue;

@interface NMBUIAccountUtil : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSSManager *nssManager;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *itunesAccount;
@property (retain, nonatomic) ACAccount *idmsAccount;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (void)_sendITunesAccountToGizmoIfNecessary;
- (id)_idmsAccountForCurrentAccount;
- (BOOL)_doesAccount:(id)a0 matchAccountDict:(id)a1;
- (void)_signGizmoIntoITunesAccount;
- (BOOL)_doesAccount:(id)a0 matchAccount:(id)a1;
- (id)_itunesAccountNoAuth;
- (id)_signInOptions;
- (void)_attemptSignIn;
- (BOOL)_doesAccountWithAltDSID:(id)a0 DSID:(id)a1 username:(id)a2 matchAccountWithAltDSID:(id)a3 DSID:(id)a4 username:(id)a5;
- (void)sendITunesAccountToGizmoIfNecessary;
- (BOOL)hasITunesAccount;

@end
