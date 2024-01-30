@class NUPattern;

@interface NURepeatPattern : NUPattern

@property (readonly) NUPattern *pattern;
@property (readonly) long long minCount;
@property (readonly) long long maxCount;

- (id)tokens;
- (id)stringRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPattern:(id)a0 count:(long long)a1;
- (id)initWithPattern:(id)a0 minCount:(long long)a1;
- (id)initWithPattern:(id)a0 minCount:(long long)a1 maxCount:(long long)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isEqualToRepeatPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
