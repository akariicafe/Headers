@class HDProfile, NSMutableDictionary;

@interface HDQuantitySeriesManager : NSObject {
    NSMutableDictionary *_observerLock_observersByType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
}

@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forType:(id)a1 queue:(id)a2;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (id)_observersForType:(id)a0;
- (BOOL)discardSeries:(id)a0 error:(id *)a1;
- (void)samplesAdded:(id)a0 type:(id)a1 anchor:(id)a2;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (id)freezeSeries:(id)a0 metadata:(id)a1 endDate:(id)a2 error:(id *)a3;
- (void)_notifyForValues:(id)a0 series:(id)a1 anchor:(id)a2 journaled:(BOOL)a3;
- (void)removeObserver:(id)a0 forType:(id)a1;
- (BOOL)insertValues:(id)a0 series:(id)a1 error:(id *)a2;

@end
