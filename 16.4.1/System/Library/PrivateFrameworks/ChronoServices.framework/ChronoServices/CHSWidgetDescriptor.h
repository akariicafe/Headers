@class INIntent, NSString, NSArray, NSMutableArray, INCWidgetIntentProvider;

@interface CHSWidgetDescriptor : CHSBaseDescriptor <NSMutableCopying, CHSWidgetPersonality, NSSecureCoding> {
    NSMutableArray *_fetchDefaultIntentCompletions;
    INCWidgetIntentProvider *_defaultIntentProvider;
    INIntent *_defaultIntent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long supportedSizeClasses;
@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, nonatomic) NSArray *intentRecommendations;
@property (readonly, nonatomic) long long widgetVisibility;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)cachedDefaultIntent;
- (void)loadDefaultIntent:(id /* block */)a0;
- (id)widgetForFamily:(long long)a0 intent:(id)a1;
- (id)_intentDescription;
- (id)copyAsCHSAvocadoDescriptor;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 supportedFamilies:(unsigned long long)a3 intentType:(id)a4;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;

@end
