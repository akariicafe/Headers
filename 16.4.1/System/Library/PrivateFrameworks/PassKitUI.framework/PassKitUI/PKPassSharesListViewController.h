@class PKShareAuthorizationSession, NSString, PKPassSharesListSectionController, PKSharedPassSharesController;

@interface PKPassSharesListViewController : PKDynamicCollectionViewController <PKShareSecureElementPassViewControllerDelegate, PKPassSharesListSectionControllerDelegate> {
    PKSharedPassSharesController *_sharesController;
    PKShareAuthorizationSession *_authorizer;
    PKPassSharesListSectionController *_sharesSectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_donePressed;
- (void)_setIsLoading:(BOOL)a0;
- (void)_showDisplayableError:(id)a0;
- (id)initWithSharesController:(id)a0;
- (void)passSharesListSectionController:(id)a0 didSelectShare:(id)a1;
- (void)passSharesListSectionController:(id)a0 presentAlert:(id)a1;
- (void)passSharesListSectionController:(id)a0 setIsLoading:(BOOL)a1;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(id)a0;
- (void)passSharesListSectionControllerDidSelectAddShare:(id)a0;
- (void)reloadDataAnimated:(BOOL)a0;
- (void)shareSecureElementPassViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
