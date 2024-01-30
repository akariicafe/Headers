@class SBDeactivationSettings, NSString, SBActivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor> {
    NSString *_identifier;
}

@property (readonly, nonatomic) BOOL isPreviousWorkspaceEntity;
@property (readonly, nonatomic) BOOL isEmptyWorkspaceEntity;
@property (readonly, nonatomic) BOOL isHomeScreenEntity;
@property (nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBActivationSettings *activationSettings;
@property (readonly, nonatomic) SBDeactivationSettings *deactivationSettings;
@property (readonly, nonatomic) BOOL supportsPresentationAtAnySize;
@property (readonly, nonatomic) BOOL supportsSplitView;
@property (readonly, nonatomic) BOOL wantsExclusiveForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property (readonly, nonatomic) unsigned long long layoutAttributes;
@property (readonly, nonatomic) Class viewControllerClass;
@property (readonly, copy, nonatomic) id /* block */ entityGenerator;

+ (id)entity;

- (long long)flagForActivationSetting:(unsigned int)a0;
- (id /* block */)_generator;
- (id)deviceApplicationSceneEntity;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)objectForDeactivationSetting:(unsigned int)a0;
- (id)succinctDescriptionBuilder;
- (id)copyActivationSettings;
- (BOOL)boolForDeactivationSetting:(unsigned int)a0;
- (void)clearDeactivationSettings;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (BOOL)supportsLayoutRole:(long long)a0;
- (BOOL)boolForActivationSetting:(unsigned int)a0;
- (void)setFlag:(long long)a0 forActivationSetting:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isApplicationSceneEntity;
- (id)displayItemRepresentation;
- (void)setFlag:(long long)a0 forDeactivationSetting:(unsigned int)a1;
- (void)applyDeactivationSettings:(id)a0;
- (void)setObject:(id)a0 forDeactivationSetting:(unsigned int)a1;
- (id)appClipPlaceholderEntity;
- (BOOL)isAppClipPlaceholderEntity;
- (id)initWithIdentifier:(id)a0 displayChangeSettings:(id)a1;
- (long long)flagForDeactivationSetting:(unsigned int)a0;
- (id)copyDeactivationSettings;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isAnalogousToEntity:(id)a0;
- (void)applyActivationSettings:(id)a0;
- (BOOL)representsSameLayoutElementAsDescriptor:(id)a0;
- (id)applicationSceneEntity;
- (BOOL)hasLayoutAttributes:(unsigned long long)a0;
- (id)objectForActivationSetting:(unsigned int)a0;
- (BOOL)isDeviceApplicationSceneEntity;
- (void)setObject:(id)a0 forActivationSetting:(unsigned int)a1;
- (void).cxx_destruct;
- (void)clearActivationSettings;

@end
