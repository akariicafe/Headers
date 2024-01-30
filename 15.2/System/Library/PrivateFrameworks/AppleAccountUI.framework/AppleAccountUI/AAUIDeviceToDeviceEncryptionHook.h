@class NSString, AAUIServerHookResponse, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook>

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_performHSAUpgradeWithAttributes:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithAltDSID:(id)a0 upgradeContext:(id)a1;

@end
