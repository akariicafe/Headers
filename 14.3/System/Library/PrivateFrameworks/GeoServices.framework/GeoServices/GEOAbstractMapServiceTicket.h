@class NSString, NSArray, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSDictionary, GEOMapServiceTraits, GEODirectionIntent, GEOMapRegion, GEOCategorySearchResultSection;

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) NSArray *browseCategories;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic) NSString *resultSectionHeader;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) NSArray *retainedSearchMetadata;
@property (readonly, nonatomic) NSArray *searchResultSections;
@property (readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property (readonly, nonatomic) NSArray *relatedEntitySections;
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property (readonly, nonatomic) NSArray *collectionResults;
@property (readonly, nonatomic) NSArray *publisherResults;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 timeout:(long long)a1 networkActivity:(id /* block */)a2;
- (void)applyToCorrectedSearch:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithRefinedHandler:(id /* block */)a0 timeout:(long long)a1 networkActivity:(id /* block */)a2;
- (void)submitWithHandler:(id /* block */)a0 timeout:(long long)a1 networkActivity:(id /* block */)a2 queue:(id)a3;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1 queue:(id)a2;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3 queue:(id)a4;
- (void)submitWithRefinedHandler:(id /* block */)a0 timeout:(long long)a1 networkActivity:(id /* block */)a2 queue:(id)a3;
- (void)submitWithRefinedHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3 queue:(id)a4;
- (void)submitWithRefinedHandler:(id /* block */)a0 networkActivity:(id /* block */)a1 queue:(id)a2;
- (void)submitWithRefinedHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithRefinedHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;
- (void)applyToPlaceInfo:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;

@end
