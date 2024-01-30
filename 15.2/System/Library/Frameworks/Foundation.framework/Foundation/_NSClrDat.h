@interface _NSClrDat : NSConcreteData

- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (BOOL)_allowsDirectEncoding;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;

@end
