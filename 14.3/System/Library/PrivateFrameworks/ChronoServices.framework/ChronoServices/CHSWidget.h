@class NSString, INIntent;

@interface CHSWidget : NSObject <BSDescriptionProviding, BSXPCCoding, CHSWidgetPersonality, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 family:(long long)a3 intent:(id)a4;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 family:(long long)a2 intent:(id)a3;
- (id)initWithPersonality:(id)a0 family:(long long)a1 intent:(id)a2;
- (id)widgetByReplacingIntent:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
