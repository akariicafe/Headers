@class NSString, _ASIncomingCallObserver, _SFPasswordPickerTableViewController;

@interface SFPasswordPickerViewController : UINavigationController <_SFPasswordPickerTableViewControllerDelegate> {
    id /* block */ _completionHandler;
    _SFPasswordPickerTableViewController *_passwordPickerTableViewController;
    _ASIncomingCallObserver *_callObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)passwordPickerTableViewControllerDidCancel:(id)a0;
- (void)passwordPickerTableViewController:(id)a0 didPickSavedPassword:(id)a1;
- (id)initWithPrompt:(id)a0 forUserNamesOnly:(BOOL)a1 appNames:(id)a2 appID:(id)a3 matchedSites:(id)a4 urlString:(id)a5 minimumNumberOfCredentialsToShowLikelyMatchesSection:(unsigned long long)a6 shouldShowIcons:(BOOL)a7 shouldGetHintStrings:(BOOL)a8 completionHandler:(id /* block */)a9;
- (void)_dismiss;
- (void)_appDidEnterBackground:(id)a0;

@end
