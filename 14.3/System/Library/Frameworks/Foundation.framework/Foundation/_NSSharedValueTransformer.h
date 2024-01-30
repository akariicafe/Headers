@interface _NSSharedValueTransformer : NSValueTransformer

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copy;
- (id)retain;
- (BOOL)_isBooleanTransformer;

@end
