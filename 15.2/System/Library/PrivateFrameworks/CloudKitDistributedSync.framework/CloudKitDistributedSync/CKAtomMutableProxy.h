@interface CKAtomMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)setValue:(id)a0;
- (void)setVersion:(unsigned long long)a0;
- (id)timestamp;
- (id)references;
- (void)copyFromObject:(id)a0;
- (id)location;
- (void)setAtomBehavior:(unsigned char)a0;
- (void)setAtomType:(unsigned long long)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)setAtomBehavior:(unsigned char)a0 withValidation:(BOOL)a1;
- (void)setValueBytes:(void *)a0 length:(unsigned long long)a1;

@end
