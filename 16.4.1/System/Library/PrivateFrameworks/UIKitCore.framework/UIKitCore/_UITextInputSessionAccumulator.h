@class NSString;

@interface _UITextInputSessionAccumulator : NSObject <NSCopying> {
    unsigned long long _values[8];
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (readonly, nonatomic) id /* block */ block;

+ (id)accumulatorWithName:(id)a0 type:(long long)a1 depthRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 block:(id /* block */)a3;
+ (id)accumulatorWithName:(id)a0 type:(long long)a1 depth:(unsigned long long)a2 block:(id /* block */)a3;

- (void)_increaseWithCount:(unsigned long long)a0 source:(long long)a1;
- (void)increaseWithActions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateAnalytics:(id /* block */)a0;
- (id)description;
- (BOOL)_increaseWithActions:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
