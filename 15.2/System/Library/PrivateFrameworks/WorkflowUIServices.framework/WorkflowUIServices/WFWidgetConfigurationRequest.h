@class INIntent, NSString, NSSecurityScopedURLWrapper, UIColor, INSchema;

@interface WFWidgetConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSSecurityScopedURLWrapper *schemaBundleURL;
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *widgetBundleScopedURL;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultCardSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialCardFrame;
@property (readonly, copy, nonatomic) NSString *widgetDisplayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, nonatomic) INSchema *schema;
@property (readonly, nonatomic, getter=isWidgetExtensionInformationLoaded) BOOL widgetExtensionInformationLoaded;
@property (readonly, nonatomic) UIColor *widgetPrimaryColor;
@property (readonly, nonatomic) UIColor *widgetTintColor;
@property (readonly, nonatomic) BOOL usesWidgetAccentColor;

- (id)initWithOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)appBundleIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithIntent:(id)a0 bundleIdentifier:(id)a1 widgetBundleScopedURL:(id)a2 schemaBundleURL:(id)a3 family:(long long)a4 defaultCardSize:(struct CGSize { double x0; double x1; })a5 initialCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 widgetDisplayName:(id)a7 widgetDescription:(id)a8 usesWidgetAccentColor:(BOOL)a9;
- (id)initWithIntent:(id)a0 bundleIdentifier:(id)a1 widgetBundleScopedURL:(id)a2 schemaBundleURL:(id)a3 family:(long long)a4 defaultCardSize:(struct CGSize { double x0; double x1; })a5 initialCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 widgetDisplayName:(id)a7 widgetDescription:(id)a8 widgetPrimaryColor:(id)a9 widgetTintColor:(id)a10 usesWidgetAccentColor:(BOOL)a11;
- (void)loadWidgetExtensionInformationWithCompletion:(id /* block */)a0;
- (void)startAccessingSecurityScopedBundleResource;

@end
