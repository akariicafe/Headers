@class NSString, CRListItemMarker;

@interface CRListItemOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>

@property (retain) CRListItemMarker *marker;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } markerRange;
@property (readonly) long long markerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_detectPredefinedListMarker:(id)a0 fromSet:(id)a1 markerType:(long long)a2;
+ (id)bulletsSet;
+ (id)decorativeDecimalsSet;
+ (id)endOfMarkerSet;
+ (id)extendedMarkersSet;
+ (id)hyphensSet;
+ (id)listItemForParagraph:(id)a0;
+ (id)listItemMarkerForText:(id)a0 requiresAdjacentText:(BOOL)a1;
+ (id)startOfMarkerSet;
+ (BOOL)textStartsWithListItem:(id)a0;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)layoutComponents;
- (BOOL)canBeSucceededByListItem:(id)a0;
- (BOOL)contributesToDocumentHierarchy;
- (id)initWithParagraphs:(id)a0 marker:(id)a1;
- (id)listItemByAppendingParagraph:(id)a0;
- (id)regionsSuitableForDataDetectorOutput;

@end
