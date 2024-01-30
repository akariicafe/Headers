@class NSOrderedSet, NSSet, NSString, BSSettings, FBSSceneIdentityToken;

@interface FBSSceneClientSettings : NSObject <BSDebugDescriptionProviding, BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    BSSettings *_otherSettings;
}

@property (readonly, copy, nonatomic) NSOrderedSet *layers;
@property (readonly, nonatomic) double preferredLevel;
@property (readonly, nonatomic) long long preferredInterfaceOrientation;
@property (readonly, copy, nonatomic) NSSet *occlusions;
@property (readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)_isMutable;
+ (id)settings;

- (id)initWithSettings:(id)a0;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 debug:(BOOL)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (BOOL)appendDescriptionToBuilder:(id)a0 forFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)otherSettings;

@end
