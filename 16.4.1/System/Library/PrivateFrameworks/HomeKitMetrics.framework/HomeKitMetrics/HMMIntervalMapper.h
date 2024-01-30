@interface HMMIntervalMapper : NSObject

+ (id)unsignedClosedOpenFixedIntervalMapper:(id)a0;
+ (id)unsignedOpenClosedFixedIntervalMapper:(id)a0;

- (id)intervalIndexForValue:(unsigned long long)a0;
- (id)intervalForValue:(unsigned long long)a0;

@end
