@class RUIObjectModel, AAUIServerHookResponse, NSString;
@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitAuthenticatonHook : NSObject <AAUIServerHook> {
    NSString *_appleId;
    NSString *_altDSID;
}

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
- (id)initWithUsername:(id)a0 altDSID:(id)a1;
- (void)_reauthenticateWithServerAttributes:(id)a0 completion:(id /* block */)a1;
- (id)authContextFromAttributes:(id)a0;
- (void)updateResponseWithAuthResults:(id)a0;

@end
