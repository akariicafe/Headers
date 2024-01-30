@class ACAccount;

@interface MTAccountController : MTSingleton

@property (retain) ACAccount *_activeAccount;
@property BOOL hasFetchedInitialAccount;
@property (retain, nonatomic) ACAccount *accountOverride;

+ (BOOL)iTunesAccountDidChangeForACAccountNotification:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setActiveAccount:(id)a0;
- (void)dealloc;
- (id)activeAccount;
- (void)_updateActiveAccount;
- (id)activeDsid;
- (void)didChangeStoreAccount:(id)a0;
- (id)_activeAccountBlocking;
- (id)activeStorefront;
- (id)activeEmail;
- (id)activeFullName;
- (BOOL)isUserLoggedIn;
- (BOOL)activeAccountIsManagedAppleID;

@end
