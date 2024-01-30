@class SearchUIAppIconImage, SFSearchResult;
@protocol SBLeafIconDataSource;

@interface SearchUIAppIcon : SBLeafIcon

@property (class, readonly, nonatomic, getter=isPlaceholderIcon) BOOL placeholderIcon;

@property (weak, nonatomic) id<SBLeafIconDataSource> activeDataSourceForwarder;
@property (readonly, nonatomic) SFSearchResult *searchResult;
@property (readonly, nonatomic) unsigned long long variant;
@property (retain, nonatomic) SearchUIAppIconImage *iconImage;

+ (BOOL)canGenerateIconsInBackground;

- (void).cxx_destruct;
- (void)iconDidChange;
- (id)initWithSearchResult:(id)a0 variant:(unsigned long long)a1;
- (id)uniqueIdentifier;
- (void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)activeDataSource;

@end
