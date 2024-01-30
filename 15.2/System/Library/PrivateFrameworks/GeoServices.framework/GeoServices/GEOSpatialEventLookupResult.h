@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}

- (id)poiEventsForSpatialLookupParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMapTable:(id)a0;

@end
