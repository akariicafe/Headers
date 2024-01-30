@class UISCompatibilityContext, NSSet, UISDisplayContext, NSString, UISDeviceContext, FBSSceneIdentityToken;

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding>

@property (readonly, nonatomic) UISDisplayContext *displayContext;
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

- (id)initWithXPCDictionary:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithDisplayContext:(id)a0 deviceContext:(id)a1 persistedSceneIdentifiers:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayContext:(id)a0 deviceContext:(id)a1 persistedSceneIdentifiers:(id)a2 supportAppSceneRequests:(BOOL)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUISApplicationInitializationContext:(id)a0;

@end
