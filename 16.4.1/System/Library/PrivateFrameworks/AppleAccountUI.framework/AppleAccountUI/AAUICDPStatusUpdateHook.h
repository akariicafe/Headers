@class NSString, NSDictionary, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface AAUICDPStatusUpdateHook : NSObject <RUIServerHook> {
    NSDictionary *_actionControllers;
    unsigned long long _presentationType;
}

@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)_handleCompletionWithCallback:(id /* block */)a0 onModel:(id)a1 forHookAction:(id)a2 userAction:(unsigned long long)a3 error:(id)a4;
- (void)_handleUserInteractionWithCallback:(id /* block */)a0 onModel:(id)a1 forHookAction:(id)a2 userAction:(unsigned long long)a3;
- (void)_invokeJSCallback:(id)a0 onModel:(id)a1;
- (void)_invokeJSCallback:(id)a0 onModel:(id)a1 withArguments:(id)a2;
- (unsigned long long)_presentationTypeForString:(id)a0;
- (void)_processAttributes:(id)a0;
- (void)_updateStatusWithAction:(id)a0 forObjectModel:(id)a1 completion:(id /* block */)a2;
- (id)additionalPayloadForAction:(id)a0 error:(id)a1;
- (id)changeControllerForAction:(id)a0;
- (void)postCompletionProcessingForAction:(id)a0 error:(id)a1;

@end
