@interface _NSSharedValueTransformer : NSValueTransformer

- (id)retain;
- (BOOL)_isBooleanTransformer;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
