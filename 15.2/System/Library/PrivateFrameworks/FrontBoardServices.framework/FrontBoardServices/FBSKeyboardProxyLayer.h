@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_succinctDescription;
- (BOOL)isKeyboardProxyLayer;
- (id)initWithLevel:(double)a0 keyboardOwner:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)alignment;
- (unsigned long long)hash;

@end
