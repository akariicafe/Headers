@interface CLKDate : NSDate

+ (double)timeIntervalSinceReferenceDate;
+ (id)date;
+ (id)dateWithTimeIntervalSinceNow:(double)a0;
+ (id)complicationDate;
+ (id)unmodifiedDate;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)a0;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (id)initWithTimeIntervalSinceNow:(double)a0;
- (double)timeIntervalSinceNow;

@end
