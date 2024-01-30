@class NSArray;

@interface WFImageSymbolConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long representationType;
@property (readonly, nonatomic) id platformSymbolConfiguration;
@property (readonly, nonatomic) double pointSize;
@property (readonly, copy, nonatomic) NSArray *hierarchicalColors;
@property (nonatomic) unsigned long long weight;

+ (id)configurationWithPointSize:(double)a0;
+ (id)configurationWithNSImageSymbolConfiguration:(id)a0;
+ (id)configurationWithPointSize:(double)a0 hierarchicalColors:(id)a1;
+ (id)configurationWithUIImageSymbolConfiguration:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlatformSymbolConfiguration:(id)a0;
- (id)initWithPointSize:(double)a0 hierarchicalColors:(id)a1;
- (id)platformHierarchicalColors;
- (long long)platformWeight;
- (id)uiKitConfiguration;

@end
