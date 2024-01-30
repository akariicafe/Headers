@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}

- (id)init;
- (id)description;
- (void)clear;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)appendObject:(id)a0 forTime:(double)a1;
- (unsigned long long)insertionIndexForTime:(id)a0;
- (id)nearestObjectForTime:(double)a0;

@end
