@class NSSet, UISDisplayContext, NSString, UISDeviceContext, FBSSceneIdentityToken;

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding>

@property (readonly, nonatomic) UISDisplayContext *displayContext;
@property (readonly, nonatomic) UISDeviceContext *deviceContext;
@property (readonly, nonatomic) NSSet *persistedSceneIdentifiers;
@property (readonly, nonatomic) FBSSceneIdentityToken *defaultSceneToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultContext;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUISApplicationInitializationContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayContext:(id)a0 deviceContext:(id)a1 persistedSceneIdentifiers:(id)a2;

@end
