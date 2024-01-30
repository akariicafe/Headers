@class NSString, RUIObjectModel, FAInviteContext, NSObject, AAUIServerHookResponse;
@protocol FAInviteConfigurationController, AAUIServerHookDelegate;

@interface FAInvokeMessageHook : NSObject <FAInviteControllerDelegate, AAUIServerHook> {
    NSObject<FAInviteConfigurationController> *_messageConfigurationController;
    FAInviteContext *_testContext;
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (void)inviteController:(id)a0 didFinishWithStatus:(unsigned long long)a1 recipients:(id)a2 userInfo:(id)a3 error:(id)a4;
- (void)inviteControllerDidStartAsyncLoading:(id)a0;
- (void)inviteControllerDidEndAsyncLoading:(id)a0;
- (long long)transportWithActionString:(id)a0;
- (void)_presentMessagesInviteWithServerAttributes:(id)a0 transport:(long long)a1 sourceView:(id)a2 completion:(id /* block */)a3;
- (id)_stringForCompletionStatus:(unsigned long long)a0;

@end
