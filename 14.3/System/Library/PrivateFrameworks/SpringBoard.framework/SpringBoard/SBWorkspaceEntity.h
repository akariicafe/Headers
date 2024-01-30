@class SBDeactivationSettings, NSString, SBActivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor> {
    NSString *_identifier;
}

@property (readonly, nonatomic) BOOL isPreviousWorkspaceEntity;
@property (readonly, nonatomic) BOOL isEmptyWorkspaceEntity;
@property (readonly, nonatomic) BOOL isHomeScreenEntity;
@property (nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) long long _mainDisplayPreferredInterfaceOrientation;
@property (nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBActivationSettings *activationSettings;
@property (readonly, nonatomic) SBDeactivationSettings *deactivationSettings;
@property (readonly, nonatomic) BOOL supportsPresentationAtAnySize;
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

- (void)setFlag:(long long)a0 forDeactivationSetting:(unsigned int)a1;
- (void)clearDeactivationSettings;
- (long long)preferredInterfaceOrientationOnDisplayWithIdentity:(id)a0;
- (BOOL)isApplicationSceneEntity;
- (void)setPreferredInterfaceOrientation:(long long)a0 onDisplayWithIdentity:(id)a1;
- (long long)flagForActivationSetting:(unsigned int)a0;
- (id)copyDeactivationSettings;
- (id)initWithIdentifier:(id)a0 displayChangeSettings:(id)a1;
- (id)init;
- (BOOL)boolForDeactivationSetting:(unsigned int)a0;
- (id)deviceApplicationSceneEntity;
- (void).cxx_destruct;
- (id)inlineAppExposeWorkspaceEntity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)boolForActivationSetting:(unsigned int)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)applyActivationSettings:(id)a0;
- (BOOL)isInlineAppExposeWorkspaceEntity;
- (id)objectForDeactivationSetting:(unsigned int)a0;
- (BOOL)supportsLayoutRole:(long long)a0;
- (long long)flagForDeactivationSetting:(unsigned int)a0;
- (id)objectForActivationSetting:(unsigned int)a0;
- (void)setObject:(id)a0 forDeactivationSetting:(unsigned int)a1;
- (BOOL)hasLayoutAttributes:(unsigned long long)a0;
- (id)succinctDescription;
- (void)setFlag:(long long)a0 forActivationSetting:(unsigned int)a1;
- (BOOL)isAppClipPlaceholderEntity;
- (BOOL)isAnalogousToEntity:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (id)appClipPlaceholderEntity;
- (BOOL)isDeviceApplicationSceneEntity;
- (id)applicationSceneEntity;
- (id)copyActivationSettings;
- (void)clearActivationSettings;
- (void)setObject:(id)a0 forActivationSetting:(unsigned int)a1;
- (void)applyDeactivationSettings:(id)a0;
- (id /* block */)_generator;
- (id)succinctDescriptionBuilder;

@end
