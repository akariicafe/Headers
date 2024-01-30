@interface __NSMallocBlock : NSBlock

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
