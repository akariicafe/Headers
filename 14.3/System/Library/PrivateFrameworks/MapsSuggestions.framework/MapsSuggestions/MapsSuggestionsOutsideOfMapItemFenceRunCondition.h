@class GEOMapItemStorage;

@interface MapsSuggestionsOutsideOfMapItemFenceRunCondition : MapsSuggestionsBaseRunCondition {
    GEOMapItemStorage *_mapItem;
    double _radius;
}

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 radius:(double)a1;
- (BOOL)shouldRun;

@end
