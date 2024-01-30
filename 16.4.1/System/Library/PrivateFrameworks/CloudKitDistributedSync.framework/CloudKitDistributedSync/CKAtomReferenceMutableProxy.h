@interface CKAtomReferenceMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)setType:(unsigned char)a0;
- (id)timestamp;
- (id)location;
- (void)assignLocationFromProxy:(id)a0;
- (void)assignTimestampFromProxy:(id)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)copyFromReference:(id)a0;

@end
