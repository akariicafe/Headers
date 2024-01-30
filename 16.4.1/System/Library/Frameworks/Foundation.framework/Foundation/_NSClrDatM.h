@interface _NSClrDatM : NSConcreteMutableData

- (BOOL)_canUseRealloc;
- (BOOL)_allowsDirectEncoding;
- (void)_freeBytes;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (id)description;

@end
