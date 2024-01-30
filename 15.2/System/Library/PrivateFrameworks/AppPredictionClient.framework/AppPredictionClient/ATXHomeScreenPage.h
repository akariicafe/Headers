@class NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pageIndex;
@property (copy, nonatomic) NSArray *stacks;
@property (copy, nonatomic) NSArray *panels;
@property (copy, nonatomic) NSDictionary *appLocations;
@property (copy, nonatomic) NSDictionary *webClipLocations;

- (id)initFromDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_containsWidgetWithExtensionBundleId:(id)a0;
- (BOOL)containsSuggestionsWidget;
- (BOOL)containsAppPredictionPanel;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentationIncludingAllApps:(BOOL)a0;
- (unsigned long long)hash;
- (id)nonFolderAppsOnPage;

@end
