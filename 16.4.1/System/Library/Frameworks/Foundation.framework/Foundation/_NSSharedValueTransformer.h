@interface _NSSharedValueTransformer : NSValueTransformer

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (BOOL)_isDeallocating;
- (BOOL)_isBooleanTransformer;
- (id)autorelease;

@end
