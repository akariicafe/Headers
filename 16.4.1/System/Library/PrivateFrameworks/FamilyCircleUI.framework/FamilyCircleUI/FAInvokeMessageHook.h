@class NSString, FACircleRemoteUIDelegate, RUIObjectModel, FAInviteContext, NSObject, RUIServerHookResponse;
@protocol FAInviteConfigurationController, RUIServerHookDelegate;

@interface FAInvokeMessageHook : NSObject <FAInviteControllerDelegate, AAUIServerHook> {
    NSObject<FAInviteConfigurationController> *_messageConfigurationController;
    FAInviteContext *_testContext;
    id /* block */ _completion;
}

@property (weak, nonatomic) FACircleRemoteUIDelegate *remoteUIDelegate;
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
- (void)inviteController:(id)a0 didFinishWithStatus:(unsigned long long)a1 recipients:(id)a2 userInfo:(id)a3 error:(id)a4;
- (void)inviteControllerDidEndAsyncLoading:(id)a0;
- (void)inviteControllerDidStartAsyncLoading:(id)a0;
- (void)_presentMessagesInviteWithServerAttributes:(id)a0 transport:(long long)a1 sourceView:(id)a2 completion:(id /* block */)a3;
- (id)_stringForCompletionStatus:(unsigned long long)a0;
- (void)dismissWithUserInfo:(id)a0;
- (long long)transportWithActionString:(id)a0;

@end
