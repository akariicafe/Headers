@class NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pageIndex;
@property (copy, nonatomic) NSArray *stacks;
@property (copy, nonatomic) NSArray *panels;
@property (copy, nonatomic) NSDictionary *appLocations;

- (id)initFromDictionaryRepresentation:(id)a0;
- (BOOL)containsAppPredictionPanel;
- (BOOL)containsSuggestionsWidget;
- (void).cxx_destruct;
- (BOOL)_containsWidgetWithExtensionBundleId:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
