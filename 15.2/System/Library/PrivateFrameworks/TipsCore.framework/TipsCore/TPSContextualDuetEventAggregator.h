@class NSMutableDictionary, TPSContextualDuetEventBookmark;

@interface TPSContextualDuetEventAggregator : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyPathObservationMap;
@property (retain, nonatomic) NSMutableDictionary *matchedEventMap;
@property (readonly, copy, nonatomic) TPSContextualDuetEventBookmark *bookmark;

+ (BOOL)supportsSecureCoding;

- (id)initWithBookmark:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (void)addObservationResult:(id)a0 forKey:(id)a1;
- (void)evaluateResultsWithMinObservationCount:(unsigned long long)a0 maxTimeInterval:(double)a1 usingBlock:(id /* block */)a2;
- (void)_updateLastMatchedEvent:(id)a0 forKey:(id)a1;
- (void)_removeOutdatedObservations:(double)a0;
- (id)lastEventForKey:(id)a0;
- (id)observationMapForKey:(id)a0;

@end
