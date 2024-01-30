@interface _NSClrDatM : NSConcreteMutableData

- (BOOL)_canUseRealloc;
- (BOOL)_allowsDirectEncoding;
- (void)_freeBytes;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)encodeWithCoder:(id)a0;

@end
