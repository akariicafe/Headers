@class GEOMapServiceTraits, GEODirectionIntent, GEOMapRegion, NSDictionary, GEOPDMerchantLookupResult, NSString, GEOResultRefinementGroup, GEOPDPlaceSummaryLayoutMetadata, geo_isolater, GEORelatedSearchSuggestion, GEOSearchAutoRedoThreshold, NSArray, GEOResolvedItem, GEOCategorySearchResultSection, GEOSearchSectionList;

@interface _GEOBatchReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceTicket> {
    id /* block */ _locationShifter;
    geo_isolater *_shiftIsolation;
}

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
@property (readonly, nonatomic) NSArray *dotPlaces;
@property (readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property (readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property (readonly, nonatomic) BOOL disableAdditionalViewportPadding;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void)_handleResponse:(id)a0 completion:(id /* block */)a1;
- (void)_submitRequest:(id)a0 auditToken:(id)a1 timeout:(double)a2 withHandler:(id /* block */)a3 networkActivity:(id /* block */)a4;
- (id)initWithRequest:(id)a0 locationShifter:(id /* block */)a1 traits:(id)a2;
- (void).cxx_destruct;
- (void)_processRequest:(id)a0 auditToken:(id)a1 timeout:(double)a2 withHandler:(id /* block */)a3 refinedHandler:(id /* block */)a4 networkActivity:(id /* block */)a5;

@end
