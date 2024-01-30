@class NSString, FBSSceneIdentityToken;

@interface BLSSceneAttribute : BLSAttribute <BSXPCCoding>

@property (readonly, nonatomic) FBSSceneIdentityToken *sceneIdentityToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFBSScene:(id)a0;
- (id)initWithSceneIdentityToken:(id)a0;

@end
