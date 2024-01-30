@interface __NSMallocBlock__ : NSBlock

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
