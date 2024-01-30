@class NSDictionary, HDOntologyUpdateCoordinator, HKObserverSet;
@protocol HDOntologyShardImporterObserver;

@interface HDOntologyShardImporter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_importerClassesBySchemaType;
    HKObserverSet<HDOntologyShardImporterObserver> *_ontologyShardImporterObservers;
}

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly, copy, nonatomic) NSDictionary *importerClasses;

- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void)addOntologyShardImporterObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void)removeOntologyShardImporterObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)importStagedShardFilesWithError:(id *)a0;

@end
