@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}

- (void)clear;
- (void)appendObject:(id)a0 forTime:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)description;
- (id)nearestObjectForTime:(double)a0;
- (unsigned long long)insertionIndexForTime:(id)a0;

@end
