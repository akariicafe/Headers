@class CHSWidgetMetrics, NSString, CHSWidget, CHSConfiguredWidgetContainerDescriptor;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSSecureCoding, CHSWidgetPersonality> {
    CHSConfiguredWidgetContainerDescriptor *_weak_container;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) CHSConfiguredWidgetContainerDescriptor *container;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isSuggestion) BOOL suggestion;
@property (readonly, nonatomic, getter=isSystemConfigured) BOOL systemConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;

+ (id)new;

- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 isSuggestion:(BOOL)a3 isSystemConfigured:(BOOL)a4;
- (BOOL)matchesPersonality:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (void)_setContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
