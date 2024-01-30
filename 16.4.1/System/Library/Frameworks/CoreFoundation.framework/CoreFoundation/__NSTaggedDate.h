@interface __NSTaggedDate : NSDate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (double)timeIntervalSinceReferenceDate;
- (void)dealloc;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;

@end
