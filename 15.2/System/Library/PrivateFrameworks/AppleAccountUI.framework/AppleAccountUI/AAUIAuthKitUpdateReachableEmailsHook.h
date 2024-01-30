@class RUIObjectModel, AAUIServerHookResponse, NSString;
@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitUpdateReachableEmailsHook : NSObject <AAUIServerHook> {
    NSString *_altDSID;
}

@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (void)_updateAccountWithReachableEmails:(id)a0 completion:(id /* block */)a1;

@end
