@class NSString, NSSet, RUIObjectModel, ACAccount, AAUISignInOperationManager, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface ICQUIEnableiCloudSyncHook : NSObject <AAUISignInOperationDelegate, RUIServerHook> {
    ACAccount *_account;
    NSSet *_dataclasses;
    id /* block */ _hookCompletion;
    AAUISignInOperationManager *_dataclassOperationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;

- (void).cxx_destruct;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)signInOperationManager:(id)a0 didSaveAccount:(id)a1 error:(id)a2;
- (void)_turnOniCloudSyncWithCompletion:(id /* block */)a0;
- (id)continuationResponseBody;
- (id)initWithAccount:(id)a0 dataclasses:(id)a1;

@end
