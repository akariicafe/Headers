@class NSString;

@interface _UITextInputSessionAccumulator : NSObject {
    unsigned long long _values[7];
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long depth;
@property (readonly, nonatomic) id /* block */ block;

+ (id)accumulatorWithName:(id)a0 type:(long long)a1 depth:(unsigned long long)a2 block:(id /* block */)a3;

- (void).cxx_destruct;
- (void)reset;
- (void)increaseWithActions:(id)a0;
- (void)enumerateAnalytics:(id /* block */)a0;

@end
