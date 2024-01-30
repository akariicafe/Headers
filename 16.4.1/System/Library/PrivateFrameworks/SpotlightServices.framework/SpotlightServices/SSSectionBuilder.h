@class SFMutableResultSection, SPSearchQueryContext;

@interface SSSectionBuilder : NSObject

@property (weak, nonatomic) SFMutableResultSection *section;
@property (weak, nonatomic) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;

+ (id)detailedRowCardSectionForCardSection:(id)a0;
+ (void)disambiguateUIIfNecessary:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0 title:(id)a1;
+ (id)supportedBundleId;
+ (id)supportedBundleIds;
+ (BOOL)supportsSection:(id)a0;
+ (id)visibleTextForCardSection:(id)a0 includeDescriptions:(BOOL)a1;

- (id)bundleId;
- (BOOL)hasEntities;
- (void).cxx_destruct;
- (id)buildButtonItem;
- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCardSections;
- (id)buildCollectionCardSection;
- (id)buildCollectionStyle;
- (id)buildSearchContinuationString;
- (id)buildSection;
- (id)buildTitle;
- (BOOL)isContactEntitySearch;
- (BOOL)shouldSkipSection;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
