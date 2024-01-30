@class NSLocale;

@interface MKDistanceFormatter : NSFormatter

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long units;
@property (nonatomic) unsigned long long unitStyle;

- (void)encodeWithCoder:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (BOOL)_useMetric;
- (double)distanceFromString:(id)a0;
- (id)stringFromDistance:(double)a0;

@end
