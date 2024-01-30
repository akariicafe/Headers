@class FBSSceneIdentityToken;

@interface UIKBArbiterClientFocusContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) FBSSceneIdentityToken *sceneIdentity;

+ (id)focusContextForSceneIdentity:(id)a0 contextID:(unsigned int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
