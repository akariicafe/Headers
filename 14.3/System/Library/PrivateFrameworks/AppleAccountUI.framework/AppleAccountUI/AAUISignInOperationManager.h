@class NSString, UIViewController, ACUIAccountOperationsHelper;
@protocol AAUISignInOperationDelegate;

@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate> {
    ACUIAccountOperationsHelper *_accountOperationsHelper;
}

@property (weak, nonatomic) id<AAUISignInOperationDelegate> delegate;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_refreshEnabledDataclassesForAccount:(id)a0;
- (id)initWithPresentingViewController:(id)a0;
- (void)operationsHelper:(id)a0 willSaveAccount:(id)a1;
- (void)operationsHelper:(id)a0 didSaveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (void)operationsHelper:(id)a0 willRemoveAccount:(id)a1;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (id)operationsHelper:(id)a0 desiredDataclassActionFromPicker:(id)a1;
- (void)signInAccount:(id)a0 enablingDataclasses:(BOOL)a1;
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)a0 error:(id)a1;
- (id)_dataclassMergeActionPickerFromPicker:(id)a0;
- (void)_mainQueue_dataclassActionsForPicker:(id)a0 completion:(id /* block */)a1;
- (id)_alertControllerForPicker:(id)a0;
- (void)_disableDataclasses:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;

@end
