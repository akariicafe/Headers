@interface __NSGlobalBlock : NSBlock

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
