@class CPLSyncSessionPrediction, NSHashTable;

@interface CPLSyncSessionPredictor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
}

@property (readonly) CPLSyncSessionPrediction *currentPrediction;

- (void)updatePredictionWithValuesAndTypes:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
