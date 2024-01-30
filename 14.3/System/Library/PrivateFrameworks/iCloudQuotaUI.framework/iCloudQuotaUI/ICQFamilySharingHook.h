@class FACircleStateController, NSString, RUIObjectModel, AAUIServerHookResponse;
@protocol ICQServerHookDelegate, AAUIServerHookDelegate;

@interface ICQFamilySharingHook : NSObject <AAUIServerHook>

@property (weak) id<ICQServerHookDelegate> flowDelegate;
@property (retain) FACircleStateController *familyCircleStateController;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithFlowDelegate:(id)a0;
- (void)_beginFamilySharingFlowWithCompletion:(id /* block */)a0;

@end
