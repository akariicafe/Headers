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

- (void)_appDidEnterBackground:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)passwordPickerTableViewControllerDidCancel:(id)a0;
- (void)passwordPickerTableViewController:(id)a0 didPickSavedPassword:(id)a1;

@end
