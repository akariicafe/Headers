@class NSOrderedSet, NSString, FBSSceneIdentityToken;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BSDebugDescriptionProviding, BSXPCSecureCoding>

@property (copy, nonatomic, setter=_setLayers:) NSOrderedSet *layers;
@property (nonatomic) double preferredLevel;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isMutable;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setPreferredInterfaceOrientation:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)otherSettings;
- (void)setPreferredLevel:(double)a0;
- (void)setPreferredSceneHostIdentifier:(id)a0;
- (void)setPreferredSceneHostIdentity:(id)a0;

@end
