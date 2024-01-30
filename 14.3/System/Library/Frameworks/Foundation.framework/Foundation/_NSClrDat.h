@interface _NSClrDat : NSConcreteData

- (BOOL)_allowsDirectEncoding;
- (void)dealloc;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (void)encodeWithCoder:(id)a0;

@end
