@interface CKMergeableValueIDProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)zoneName;
- (id)identifier;
- (id)mergeableValueID;
- (id)zoneOwnerName;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyZoneNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyZoneOwnerNameBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (unsigned long long)identifierSize;
- (unsigned long long)zoneNameSize;
- (unsigned long long)zoneOwnerNameSize;

@end
