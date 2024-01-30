@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding> {
    BOOL _allowsHandlingNonAuthenticationDialogs;
    BOOL _shouldRecordLastAuthenticationDialogResponseTime;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_handleDefaultStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withDialogTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (void)handleStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withDialogTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (void)handleButtonAction:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0;
- (void)_handleFamilyPermissionButtonAction:(id)a0 usingRequestContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_handleBuyButtonAction:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleGotoButtonAction:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_handleAuthenticationStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withDialogTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (unsigned long long)hash;
- (void)handleStoreDialogResponse:(id)a0 usingRequestContext:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
