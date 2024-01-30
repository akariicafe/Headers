@class NSString, NSArray, MKMapItem, GEOCollectionResult, GEOServerResultScoreMetadata, GEOResolvedItem, GEODirectionIntent, GEOPublisherResult, GEORetainedSearchMetadata, GEOSearchCategory, GEOStyleAttributes;
@protocol GEOCompletionItem;

@interface MKLocalSearchCompletion : NSObject {
    id<GEOCompletionItem> _item;
    MKMapItem *_mapItem;
    BOOL _shouldDisplayNoResults;
    BOOL _shouldEnableRAPForNoResults;
}

@property (readonly, nonatomic) id<GEOCompletionItem> geoCompletionItem;
@property (readonly, nonatomic, getter=_alreadySentFeedback) BOOL alreadySentFeedback;
@property (readonly, nonatomic) NSArray *displayLines;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) GEOSearchCategory *category;
@property (readonly, nonatomic) GEOResolvedItem *clientResolved;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (retain, nonatomic) MKLocalSearchCompletion *directionIntentOrigin;
@property (retain, nonatomic) MKLocalSearchCompletion *directionIntentDestination;
@property (readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (readonly, nonatomic) BOOL hasSortPriority;
@property (readonly, nonatomic) long long sortPriority;
@property (readonly, nonatomic) long long entryTapBehavior;
@property (readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (readonly, nonatomic) unsigned long long serverSectionIndex;
@property (readonly, nonatomic) unsigned long long serverItemIndexInSection;
@property (readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property (readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property (readonly, nonatomic) long long autocompleteCellType;
@property (readonly, nonatomic) GEOCollectionResult *collectionResult;
@property (readonly, nonatomic) GEOPublisherResult *publisherResult;
@property (readonly, nonatomic) NSArray *childItems;
@property (readonly, nonatomic) NSArray *resultRefinements;
@property (readonly, nonatomic) GEOStyleAttributes *iconStyleAttributes;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *localizedSectionHeader;
@property (readonly, nonatomic, getter=_type) long long type;
@property (readonly, nonatomic, getter=_placeType) int placeType;
@property (readonly, nonatomic, getter=_hasDisambiguationRadiusMeters) BOOL hasDisambiguationRadiusMeters;
@property (readonly, nonatomic, getter=_disambiguationRadiusMeters) float disambiguationRadiusMeters;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *titleHighlightRanges;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSArray *subtitleHighlightRanges;

- (void)sendFeedback;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (id)description;
- (void).cxx_destruct;
- (id)calloutTitle;
- (BOOL)getCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0;
- (id)highlightsForLine:(unsigned long long)a0;
- (id)queryLine;
- (id)_geoCompletionItem;
- (id)copyStorage;
- (id)iconWithScale:(double)a0;
- (id)initWithGeoCompletionItem:(id)a0 serverSectionIndex:(unsigned long long)a1 serverItemIndexInSection:(unsigned long long)a2;

@end
