@interface DTBytesFormatter : NSNumberFormatter

+ (void)initialize;
+ (id)stringForObjectValue:(id)a0;
+ (id)stringFromNumber:(id)a0;
+ (id)magnitudeFormatter;
+ (id)stringForLongLong:(long long)a0;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromNumber:(id)a0;

@end
