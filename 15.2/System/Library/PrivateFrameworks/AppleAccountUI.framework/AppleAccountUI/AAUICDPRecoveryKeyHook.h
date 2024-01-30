@class RUIObjectModel, AAUIServerHookResponse, NSString;
@protocol AAUIServerHookDelegate;

@interface AAUICDPRecoveryKeyHook : NSObject <AAUIServerHook>

@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helperWithPresenter:(id)a0 forceInline:(BOOL)a1;

@end
