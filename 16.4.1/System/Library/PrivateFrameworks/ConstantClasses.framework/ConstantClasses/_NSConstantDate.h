@interface _NSConstantDate : NSDate

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (double)timeIntervalSinceReferenceDate;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
