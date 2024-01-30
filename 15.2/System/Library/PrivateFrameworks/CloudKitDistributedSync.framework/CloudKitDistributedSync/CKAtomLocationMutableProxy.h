@interface CKAtomLocationMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)setZoneName:(id)a0;
- (void)copyFromObject:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setZoneOwnerName:(id)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)setIdentifierBytes:(void *)a0 length:(unsigned long long)a1;
- (void)setZoneNameBytes:(void *)a0 length:(unsigned long long)a1;
- (void)setZoneOwnerNameBytes:(void *)a0 length:(unsigned long long)a1;
- (void)copyFromObjectProxy:(id)a0;
- (void)copyFromLocation:(id)a0;

@end
