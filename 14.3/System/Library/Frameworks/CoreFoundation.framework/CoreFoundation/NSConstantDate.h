@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (double)timeIntervalSinceReferenceDate;
- (id)retain;

@end
