@class NSString, NSMutableSet, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface MTAccountController : MTSingleton <MTAccountControllerProtocol> {
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSMutableSet *inFlightAuthRequests;
@property (retain, nonatomic) NSMutableSet *declinedAuthRequests;
@property (retain, nonatomic) ACAccount *_activeAccount;
@property BOOL hasFetchedInitialAccount;
@property (retain, nonatomic) ACAccount *accountOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)iTunesAccountDidChangeForACAccountNotification:(id)a0;

- (void)setActiveAccount:(id)a0;
- (id)activeAccount;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateActiveAccount;
- (id)primaryUser;
- (id)activeDsid;
- (id)_activeAccountBlocking;
- (BOOL)activeAccountIsManagedAppleID;
- (id)activeEmail;
- (id)activeFullName;
- (id)activeStorefront;
- (void)didChangeStoreAccount:(id)a0;
- (void)fetchActiveAccountWithCompletion:(id /* block */)a0;
- (BOOL)isPrimaryUserActiveAccount;
- (BOOL)isUserLoggedIn;

@end
