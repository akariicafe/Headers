@interface _NSClrDatM : NSConcreteMutableData

- (BOOL)_canUseRealloc;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)_freeBytes;
- (BOOL)_allowsDirectEncoding;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
