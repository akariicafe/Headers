@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) unsigned long long page;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) long long family;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *widgetMetrics;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic, getter=isInStack) BOOL inStack;
@property (readonly, nonatomic, getter=isOnTop) BOOL onTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithWidget:(id)a0 uniqueIdentifier:(id)a1 location:(long long)a2 page:(unsigned long long)a3 widgetMetrics:(id)a4 inStack:(BOOL)a5 onTop:(BOOL)a6;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
