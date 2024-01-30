@class AFManagedStorageConnection;

@interface AFDisambiguationStore : NSObject {
    AFManagedStorageConnection *_store;
}

- (id)_store;
- (void).cxx_destruct;
- (id)infoForIdentifier:(id)a0;
- (void)saveInfo:(id)a0 forIdentifier:(id)a1;
- (void)reset;

@end
