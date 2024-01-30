@interface _NSConstantDate : NSDate

+ (id)alloc;

- (double)timeIntervalSinceReferenceDate;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (oneway void)release;

@end
