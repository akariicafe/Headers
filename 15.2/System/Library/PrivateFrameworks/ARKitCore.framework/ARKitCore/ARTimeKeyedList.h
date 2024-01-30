@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}

- (void)clear;
- (id)description;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appendObject:(id)a0 forTime:(double)a1;
- (id)nearestObjectForTime:(double)a0;
- (unsigned long long)insertionIndexForTime:(id)a0;

@end
