@class GEOMapItemStorage;

@interface MapsSuggestionsOutsideOfMapItemFenceCondition : MapsSuggestionsBaseCondition {
    GEOMapItemStorage *_mapItem;
    double _radius;
}

- (BOOL)isTrue;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 radius:(double)a1;

@end
