@class NSMutableArray;

@interface UITextSelectionWindowAveragedValue : NSObject {
    unsigned long long _depth;
    NSMutableArray *_values;
}

- (void)addValue:(double)a0;
- (void).cxx_destruct;
- (double)windowAveragedValue;
- (id)initWithDepth:(unsigned long long)a0;
- (void)flushValues;

@end
