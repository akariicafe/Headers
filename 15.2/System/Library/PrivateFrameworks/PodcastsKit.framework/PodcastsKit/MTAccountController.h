@class NSObject, NSMutableSet, ACAccount;
@protocol OS_dispatch_queue;

@interface MTAccountController : MTSingleton {
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSMutableSet *inFlightAuthRequests;
@property (retain, nonatomic) NSMutableSet *declinedAuthRequests;
@property (retain, nonatomic) ACAccount *_activeAccount;
@property BOOL hasFetchedInitialAccount;
@property (retain, nonatomic) ACAccount *accountOverride;

+ (BOOL)iTunesAccountDidChangeForACAccountNotification:(id)a0;

- (void)setActiveAccount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)activeAccount;
- (void)_updateActiveAccount;
- (id)activeDsid;
- (void)didChangeStoreAccount:(id)a0;
- (BOOL)isUserLoggedIn;
- (id)_activeAccountBlocking;
- (BOOL)isPrimaryUserActiveAccount;
- (void)fetchActiveAccountWithCompletion:(id /* block */)a0;
- (id)activeStorefront;
- (id)activeEmail;
- (id)activeFullName;
- (BOOL)activeAccountIsManagedAppleID;

@end
