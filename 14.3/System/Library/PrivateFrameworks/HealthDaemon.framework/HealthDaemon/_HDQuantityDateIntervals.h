@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject {
    double _currentStartInterval;
    double _currentEndInterval;
    long long _currentPairIndex;
    BOOL _containsUUIDs;
    NSMutableArray *_intervalPairs;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (BOOL)insideRanges:(double)a0;
- (void)addDateRangeFrom:(double)a0 to:(double)a1 uuid:(id)a2;
- (id)intersectingIdentifiersFrom:(double)a0 to:(double)a1;
- (BOOL)containsUUIDs;

@end
