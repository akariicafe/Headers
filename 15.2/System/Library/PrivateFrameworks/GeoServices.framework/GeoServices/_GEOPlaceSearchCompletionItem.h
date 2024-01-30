@class GEODirectionIntent, GEOStyleAttributes, GEOMapServiceTraits, GEOMapItemIdentifier, GEOPublisherResult, GEOServerResultScoreMetadata, GEOPDAutocompleteEntry, NSString, GEORetainedSearchMetadata, GEOResolvedItem, NSArray, NSData, GEOSearchCategory, GEOCollectionResult;
@protocol GEOMapItem;

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate> {
    GEOMapServiceTraits *_traits;
    int _entryListIndex;
    int _entryIndex;
    NSArray *_lineHighlights;
    id<GEOMapItem> _mapItem;
    GEOSearchCategory *_category;
    GEOCollectionResult *_collectionResult;
    GEOPublisherResult *_publisherResult;
    NSArray *_resultRefinements;
}

@property (readonly, nonatomic) GEOPDAutocompleteEntry *entry;
@property (readonly, nonatomic, getter=_placeDataAutocompleteEntry) GEOPDAutocompleteEntry *placeDataAutocompleteEntry;
@property (readonly, nonatomic) NSArray *displayLines;
@property (readonly, nonatomic) id<GEOMapItem> geoMapItem;
@property (readonly, nonatomic) GEOSearchCategory *searchCategory;
@property (readonly, nonatomic) GEOResolvedItem *clientResolved;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (readonly, nonatomic) BOOL hasSortPriority;
@property (readonly, nonatomic) long long sortPriority;
@property (readonly, nonatomic) long long entryTapBehavior;
@property (readonly, nonatomic) long long autocompleteCellType;
@property (readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (readonly, nonatomic) NSData *entryMetadata;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (readonly, nonatomic) float disambiguationRadiusMeters;
@property (readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property (readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property (readonly, nonatomic) GEOCollectionResult *collectionResult;
@property (readonly, nonatomic) GEOPublisherResult *publisherResult;
@property (readonly, nonatomic) NSArray *resultRefinements;
@property (readonly, nonatomic) GEOStyleAttributes *iconStyleAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)queryLine;
- (id)calloutTitle;
- (void)sendFeedback;
- (BOOL)getCoordinate:(struct { double x0; double x1; } *)a0;
- (id)highlightsForLine:(unsigned long long)a0;
- (id)initWithEntry:(id)a0 traits:(id)a1 entryListIndex:(int)a2 entryIndex:(int)a3 mapItems:(id)a4 collections:(id)a5 publishers:(id)a6;

@end
