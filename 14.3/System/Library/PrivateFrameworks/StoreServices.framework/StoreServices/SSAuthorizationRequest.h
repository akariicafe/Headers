@class NSNumber, NSString;
@protocol SSAuthorizationRequestDelegate;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {
    id _token;
}

@property (nonatomic) id<SSAuthorizationRequestDelegate> delegate;
@property (copy) NSNumber *accountIdentifier;
@property (nonatomic) BOOL allowSilentAuthentication;
@property (readonly) id authorizationToken;
@property (copy) NSString *clientIdentifierHeader;
@property (copy) NSNumber *familyAccountIdentifier;
@property (copy) NSString *keybagPath;
@property (copy) NSString *reason;
@property (nonatomic) BOOL shouldAddKeysToKeyBag;
@property (nonatomic) BOOL shouldPromptForCredentials;
@property (copy) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAuthorizationToken:(id)a0 accountIdentifier:(id)a1;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)_init;
- (BOOL)start;
- (void)startWithAuthorizationResponseBlock:(id /* block */)a0;

@end
