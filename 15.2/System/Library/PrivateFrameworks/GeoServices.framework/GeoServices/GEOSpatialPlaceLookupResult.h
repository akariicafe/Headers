@class NSMapTable;

@interface GEOSpatialPlaceLookupResult : NSObject {
    NSMapTable *_parametersToMapItemsMap;
    NSMapTable *_parametersToResultItemMap;
}

- (id)mapItemsForSpatialLookupParameters:(id)a0;
- (id)resultItemForSpatialLookupParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMapItemMap:(id)a0 resultItemMap:(id)a1;

@end
