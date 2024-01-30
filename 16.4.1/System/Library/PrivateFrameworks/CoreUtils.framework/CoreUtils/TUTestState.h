@class NSMutableDictionary;

@interface TUTestState : NSObject {
    NSMutableDictionary *_objects;
}

@property (readonly, nonatomic) int signalCount;

- (id)objectForKeyedSubscript:(id)a0;
- (int)waitWithTimeout:(double)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)signal;
- (id)description;
- (void).cxx_destruct;
- (void)incrementIntegerForKey:(id)a0;

@end
