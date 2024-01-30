@interface CKDistributedTimestampMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (void)setClock:(unsigned long long)a0;
- (void)setModifier:(unsigned char)a0;
- (void)setUnordered:(BOOL)a0;
- (void)assignDistributedSiteIdentifierFromProxy:(id)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)copyFromTimestamp:(id)a0;
- (id)distributedSiteIdentifier;
- (void)setSiteIdentifier:(id)a0;
- (void)setSiteIdentifierBytes:(void *)a0 length:(unsigned long long)a1;

@end
