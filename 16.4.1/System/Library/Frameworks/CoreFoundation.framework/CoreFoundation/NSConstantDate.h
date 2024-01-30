@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)timeIntervalSinceReferenceDate;
- (void)dealloc;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
