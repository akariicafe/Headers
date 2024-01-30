@interface DTUserTimeFormatter : NSNumberFormatter

+ (void)initialize;
+ (id)stringForObjectValue:(id)a0;
+ (id)stringForNanoseconds:(unsigned long long)a0;
+ (id)stringForNanoseconds:(unsigned long long)a0 highestResolutionTimeEnabled:(BOOL)a1;
+ (id)valueUnitStringForNanoseconds:(unsigned long long)a0;

- (id)stringForObjectValue:(id)a0;

@end
