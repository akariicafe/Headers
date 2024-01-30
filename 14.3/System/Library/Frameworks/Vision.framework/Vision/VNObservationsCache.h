@class NSMapTable;

@interface VNObservationsCache : NSObject {
    NSMapTable *_observationsCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)setObservations:(id)a0 forKey:(id)a1;
- (id)observationsForRequest:(id)a0 testedKeyHandler:(id /* block */)a1;
- (id)observationsForKey:(id)a0;

@end
