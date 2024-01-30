@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (double)timeIntervalSinceReferenceDate;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
