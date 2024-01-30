@class INIntent, NSString, CHSLocalizableString, NSData, NSMutableArray, INCWidgetIntentProvider;

@interface CHSAvocadoDescriptor : NSObject <CHSWidgetPersonality, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INCWidgetIntentProvider *defaultIntentProvider;
@property (copy, nonatomic) INIntent *defaultIntent;
@property (retain, nonatomic) NSMutableArray *fetchDefaultIntentCompletions;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, copy, nonatomic) NSString *userActivityType;
@property (readonly, nonatomic) unsigned long long supportedSizeClasses;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, nonatomic) long long widgetVisibility;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, copy, nonatomic) NSData *localeToken;
@property (readonly, copy, nonatomic) CHSLocalizableString *localizableWidgetDescription;
@property (readonly, copy, nonatomic) CHSLocalizableString *localizableDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 supportedSizeClasses:(unsigned long long)a4 widgetDescription:(id)a5;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 userActivityType:(id)a5 supportedSizeClasses:(unsigned long long)a6 widgetDescription:(id)a7;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7 localeToken:(id)a8;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)matchesPersonality:(id)a0;
- (id)widgetForFamily:(long long)a0 intent:(id)a1;
- (void)loadDefaultIntent:(id /* block */)a0;
- (BOOL)_isValidSizeClass:(long long)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
