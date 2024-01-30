@interface __NSGlobalBlock : NSBlock

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;

@end
