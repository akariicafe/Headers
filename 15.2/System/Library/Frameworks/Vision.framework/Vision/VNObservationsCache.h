@class NSMapTable;

@interface VNObservationsCache : NSObject {
    NSMapTable *_observationsCache;
}

- (id)observationsAcceptedByRequest:(id)a0 testedKeyHandler:(id /* block */)a1;
- (void)setObservations:(id)a0 forKey:(id)a1;
- (id)observationsForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
