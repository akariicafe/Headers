@class SGURLDissector, SGNamedEntityDissector, SGSqlEntityStore, PPLocalLocationStore, PPLocalNamedEntityStore, PPLocalEventStore;

@interface PPEventKitImporter : NSObject {
    PPLocalEventStore *_eventStore;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalLocationStore *_locationStore;
    SGSqlEntityStore *_urlStore;
    SGURLDissector *_urlDissector;
    SGNamedEntityDissector *_neDissector;
    Class _dataDetectorMatchClass;
    struct atomic_flag { _Atomic BOOL _Value; } _fullImportInProgress;
}

+ (BOOL)_shouldImport;
+ (id)defaultInstance;

- (BOOL)_flush;
- (id)initWithEventStore:(id)a0 namedEntityStore:(id)a1 locationStore:(id)a2 urlStore:(id)a3 urlDissector:(id)a4 namedEntityDissector:(id)a5 dataDetectorMatchClass:(Class)a6;
- (void)importEventDataWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)_deleteOldEntities;
- (void)_donateURLContainer:(id)a0;
- (void)importEventData;
- (id)init;
- (void).cxx_destruct;
- (void)_importEvent:(id)a0;
- (BOOL)_deleteOldLocations;
- (void)_dissectAndDonateEntitiesFromRawTextOfEvent:(id)a0 source:(id)a1;
- (void)_donateEntityContainer:(id)a0;
- (BOOL)deleteAllExtractions;
- (id)_entitiesFromPropertiesOfEvent:(id)a0;
- (void)_donateLocationFromPreferredLocationOfEvent:(id)a0 source:(id)a1;
- (void)_donateEntitiesForPropertiesOfEvent:(id)a0 source:(id)a1;
- (BOOL)_setDissectorsFromPipeline;
- (void)_dissectAndDonateURLsFromEvent:(id)a0 source:(id)a1;
- (void)importEvent:(id)a0;

@end
