@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject {
    double _currentStartInterval;
    double _currentEndInterval;
    long long _currentPairIndex;
    BOOL _containsUUIDs;
    NSMutableArray *_intervalPairs;
}

- (void).cxx_destruct;
- (id)init;

@end
