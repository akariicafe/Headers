@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;

- (id)_succinctDescription;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isKeyboardProxyLayer;
- (long long)alignment;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithLevel:(double)a0 keyboardOwner:(id)a1;

@end
