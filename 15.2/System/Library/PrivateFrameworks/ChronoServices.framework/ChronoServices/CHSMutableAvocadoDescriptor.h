@class NSString, NSData;

@interface CHSMutableAvocadoDescriptor : CHSAvocadoDescriptor

@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long supportedFamilies;
@property (nonatomic) long long widgetVisibility;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (nonatomic, getter=isTransparent) BOOL transparent;

- (void)setIntentType:(id)a0;
- (void)setContainerBundleIdentifier:(id)a0;
- (void)setKind:(id)a0;
- (void)setEventMachServiceName:(id)a0;
- (void)setExtensionBundleIdentifier:(id)a0;
- (void)setSupportedFamilies:(unsigned long long)a0;
- (void)setLocaleToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTransparent:(BOOL)a0;
- (void)setWidgetVisibility:(long long)a0;
- (void)setDisplayName:(id)a0;
- (void)setWidgetDescription:(id)a0;

@end
