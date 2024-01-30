@class NSString;

@interface ATXHomeScreenWidgetPersonality : NSObject <NSSecureCoding, ATXHomeScreenWidgetPersonalityProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) NSString *kind;
@property (readonly) ATXHomeScreenWidgetPersonality *personality;

+ (id)stringRepresentationForExtensionBundleId:(id)a0 kind:(id)a1;
+ (id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)a0;
+ (id)widgetKindForWidgetPersonalityStringRepresentation:(id)a0;

- (void).cxx_destruct;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExtensionBundleId:(id)a0 kind:(id)a1;

@end
