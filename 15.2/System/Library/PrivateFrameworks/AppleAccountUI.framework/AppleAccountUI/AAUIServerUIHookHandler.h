@class RemoteUIController, NSArray, NSString, NSMutableArray, UIViewController;

@interface AAUIServerUIHookHandler : NSObject <AAUIServerHookDelegate> {
    NSMutableArray *_hookIdentifiers;
    RemoteUIController *_remoteUIController;
}

@property (class, readonly) NSArray *fcui_defaultFresnoServerHooks;

@property (retain, nonatomic) UIViewController *presentingControllerOverride;
@property (copy, nonatomic) NSArray *serverHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissObjectModelsAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRemoteUIController:(id)a0;
- (id)presentationContextForHook:(id)a0;
- (id)initWithRemoteUIController:(id)a0 hooks:(id)a1;
- (void)processServerResponse:(id)a0;
- (void)processObjectModel:(id)a0 isModal:(BOOL)a1;
- (void)processObjectModel:(id)a0 isModal:(BOOL)a1 completion:(id /* block */)a2;
- (void)_rebuildServerHookHandlers;
- (void)_handleResponseForHook:(id)a0 success:(BOOL)a1 error:(id)a2 attributes:(id)a3 objectModel:(id)a4 completion:(id /* block */)a5;
- (void)refreshWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_responseDataForResult:(BOOL)a0 withError:(id)a1;
- (void)_reloadUIWithInfo:(id)a0 attributes:(id)a1 initiatingObjectModel:(id)a2 completion:(id /* block */)a3;
- (id)currentPresenter;
- (id)_refreshRequestWithInfo:(id)a0 initiatingObjectModel:(id)a1 attributes:(id)a2;

@end
