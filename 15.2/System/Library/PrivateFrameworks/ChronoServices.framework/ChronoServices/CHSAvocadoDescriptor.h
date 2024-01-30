@class INIntent, NSString, NSData, NSMutableArray, INCWidgetIntentProvider;

@interface CHSAvocadoDescriptor : NSObject <NSMutableCopying, CHSWidgetPersonality, NSCopying, NSSecureCoding, BSDescriptionProviding> {
    NSMutableArray *_fetchDefaultIntentCompletions;
    INCWidgetIntentProvider *_defaultIntentProvider;
    INIntent *_defaultIntent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long supportedSizeClasses;
@property (nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) unsigned long long supportedFamilies;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) long long widgetVisibility;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, copy, nonatomic) NSData *localeToken;
@property (readonly, copy, nonatomic) NSString *eventMachServiceName;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)widgetForFamily:(long long)a0 intent:(id)a1;
- (id)_intentDescription;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 supportedFamilies:(unsigned long long)a3 intentType:(id)a4;
- (id)cachedDefaultIntent;
- (void)loadDefaultIntent:(id /* block */)a0;
- (id)_initWithDescriptor:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
