@class UISCompatibilityContext, NSSet, UISDisplayContext, NSString, UISDeviceContext, FBSSceneIdentityToken;

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding>

@property (readonly, nonatomic) UISDisplayContext *displayContext;
@property (readonly, nonatomic) UISDisplayContext *mainDisplayContext;
@property (readonly, nonatomic) UISDisplayContext *launchDisplayContext;
@property (readonly, nonatomic) UISDeviceContext *deviceContext;
@property (readonly, nonatomic) UISCompatibilityContext *compatibilityContext;
@property (readonly, nonatomic) NSSet *persistedSceneIdentifiers;
@property (readonly, nonatomic) FBSSceneIdentityToken *defaultSceneToken;
@property (readonly, nonatomic) BOOL supportAppSceneRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultContext;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayContext:(id)a0 deviceContext:(id)a1 persistedSceneIdentifiers:(id)a2;
- (id)initWithDisplayContext:(id)a0 deviceContext:(id)a1 persistedSceneIdentifiers:(id)a2 supportAppSceneRequests:(BOOL)a3;
- (id)initWithMainDisplayContext:(id)a0 launchDisplayContext:(id)a1 deviceContext:(id)a2 persistedSceneIdentifiers:(id)a3 supportAppSceneRequests:(BOOL)a4;
- (id)initWithUISApplicationInitializationContext:(id)a0;

@end
