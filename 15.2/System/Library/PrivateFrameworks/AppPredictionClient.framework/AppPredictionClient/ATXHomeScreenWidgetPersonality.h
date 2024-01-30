@class NSString;

@interface ATXHomeScreenWidgetPersonality : NSObject <NSSecureCoding, NSCopying, ATXHomeScreenWidgetPersonalityProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) NSString *kind;
@property (readonly) ATXHomeScreenWidgetPersonality *personality;

+ (id)stringRepresentationForExtensionBundleId:(id)a0 kind:(id)a1;
+ (id)widgetKindForWidgetPersonalityStringRepresentation:(id)a0;
+ (id)stringRepresentationForATXHomeScreenWidgetDescriptor:(id)a0;
+ (id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)a0;

- (id)stringRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithExtensionBundleId:(id)a0 kind:(id)a1;
- (id)initWithStringRepresentation:(id)a0;

@end
