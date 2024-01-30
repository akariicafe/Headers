@class NSString, NSDictionary, SUMescalSession, ACAccount, NSURL, UIBarButtonItem;

@interface SUAccountViewController : SUStorePageViewController <SUNavigationItemDelegate> {
    BOOL _failed;
    NSURL *_accountURL;
    long long _mescalState;
    NSString *_primingSignature;
    NSDictionary *_tidHeaders;
}

@property (retain, nonatomic) UIBarButtonItem *logoutButton;
@property (readonly, nonatomic, getter=_mescalSession) SUMescalSession *_mescalSession;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long style;
@property (nonatomic) BOOL showAccountGlyph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_latestAccountViewController;

- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_didEnterBackground:(id)a0;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)handleFailureWithError:(id)a0;
- (id)initWithExternalAccountURL:(id)a0;
- (void)_logoutPressed:(id)a0;
- (id)_URLByRemovingBlacklistedParametersWithURL:(id)a0;
- (id)_authenticationQueryParametersForStyle:(long long)a0;
- (id)_bagKeyForStyle:(long long)a0;
- (void)_closeMescalSession;
- (void)_mescalDidOpenWithSession:(id)a0 error:(id)a1;
- (BOOL)_shouldUseWebViewFastPath;
- (id)copyArchivableContext;
- (void)enqueueFetchOperation;
- (id)navigationItem:(id)a0 willChangeLeftItem:(id)a1 toNewItem:(id)a2;
- (id)navigationItem:(id)a0 willChangeLeftItems:(id)a1 toNewItems:(id)a2;
- (id)newFetchOperation;
- (id)newViewControllerForPage:(id)a0 ofType:(long long)a1 returningError:(id *)a2;
- (BOOL)shouldSignRequests;

@end
