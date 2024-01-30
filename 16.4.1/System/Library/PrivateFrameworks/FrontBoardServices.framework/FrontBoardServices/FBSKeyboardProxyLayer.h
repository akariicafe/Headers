@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;

- (void)encodeWithXPCDictionary:(id)a0;
- (long long)alignment;
- (id)initWithXPCDictionary:(id)a0;
- (id)_succinctDescription;
- (BOOL)isKeyboardProxyLayer;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLevel:(double)a0 keyboardOwner:(id)a1;
- (void).cxx_destruct;

@end
