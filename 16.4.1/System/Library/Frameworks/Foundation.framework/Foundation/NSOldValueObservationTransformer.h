@interface NSOldValueObservationTransformer : NSObservationTransformer {
    id _lastValue;
}

+ (id)oldValuesTransformer;

- (void)_receiveBox:(id)a0;
- (void)dealloc;

@end
