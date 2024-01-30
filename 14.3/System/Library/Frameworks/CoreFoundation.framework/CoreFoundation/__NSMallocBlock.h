@interface __NSMallocBlock : NSBlock

- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)retain;

@end
