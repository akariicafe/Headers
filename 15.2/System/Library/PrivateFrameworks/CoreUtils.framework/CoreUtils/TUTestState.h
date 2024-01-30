@class NSMutableDictionary;

@interface TUTestState : NSObject {
    NSMutableDictionary *_objects;
}

@property (readonly, nonatomic) int signalCount;

- (void)signal;
- (void)incrementIntegerForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (int)waitWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;

@end
