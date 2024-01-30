@class geo_isolater, NSString, NSArray, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSDictionary, GEOMapServiceTraits, GEODirectionIntent, GEOMapRegion, GEOCategorySearchResultSection;

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
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void).cxx_destruct;
- (void)_processRequest:(id)a0 auditToken:(id)a1 timeout:(double)a2 withHandler:(id /* block */)a3 refinedHandler:(id /* block */)a4 networkActivity:(id /* block */)a5;
- (void)_submitRequest:(id)a0 auditToken:(id)a1 timeout:(double)a2 withHandler:(id /* block */)a3 networkActivity:(id /* block */)a4;
- (void)_handleResponse:(id)a0 completion:(id /* block */)a1;
- (id)initWithRequest:(id)a0 locationShifter:(id /* block */)a1 traits:(id)a2;

@end
