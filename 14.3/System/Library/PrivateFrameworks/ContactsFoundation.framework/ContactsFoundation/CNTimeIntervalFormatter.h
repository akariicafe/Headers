@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter

@property (class, readonly) CNTimeIntervalFormatter *sharedFormatter;

@property (readonly, nonatomic) NSNumberFormatter *numberFormatterWith3SigFigs;
@property (readonly, nonatomic) NSNumberFormatter *numberFormatterWith4SigFigs;

+ (id)multiplierForOrder:(long long)a0;
+ (id)stringForTimeInterval:(double)a0;
+ (id)numberFormatterWithSignificantDigits:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)stringForTimeInterval:(double)a0;

@end
