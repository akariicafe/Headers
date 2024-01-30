@class NSDictionary;

@interface SUCorePolicyDocumentationScan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (retain, nonatomic) NSDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *additionalOptions;

- (id)summary;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)backToDefaults;

@end
