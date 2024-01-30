@class NSSet, UISDisplayContext, UISDeviceContext, FBSSceneIdentityToken;

@interface UISMutableApplicationInitializationContext : UISApplicationInitializationContext

@property (retain, nonatomic) UISDisplayContext *displayContext;
@property (retain, nonatomic) UISDeviceContext *deviceContext;
@property (retain, nonatomic) NSSet *persistedSceneIdentifiers;
@property (retain, nonatomic) FBSSceneIdentityToken *defaultSceneToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPersistedSceneIdentifiers:(id)a0;
- (void)setDeviceContext:(id)a0;
- (void)setDisplayContext:(id)a0;
- (void)setDefaultSceneToken:(id)a0;

@end
