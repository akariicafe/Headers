@class NSString, RUIObjectModel, ACAccount, RUITableViewRow, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface AAUIAuthKitPasswordChangeHook : NSObject <RUITextFieldChangeObserver, RUIServerHook> {
    RUITableViewRow *_newPasswordRow;
    NSString *_newPassword;
    RUITableViewRow *_oldPasswordRow;
    NSString *_oldPassword;
}

@property (retain, nonatomic) ACAccount *appleAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;

- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (void)harvestDataFromResponse:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)_handleChangeForObjectModel:(id)a0 completion:(id /* block */)a1;
- (void)_harvestDataFromServerHTTPResponse:(id)a0;
- (id)_tableViewRowWithID:(id)a0 inObjectModel:(id)a1;
- (void)_updateiCloudAccountWithCompletion:(id /* block */)a0;
- (void)textFieldEditingDidEnd:(id)a0;

@end
