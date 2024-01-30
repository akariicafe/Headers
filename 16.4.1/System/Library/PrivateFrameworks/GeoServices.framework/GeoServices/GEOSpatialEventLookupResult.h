@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}

- (id)initWithMapTable:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)poiEventsForSpatialLookupParameters:(id)a0;

@end
