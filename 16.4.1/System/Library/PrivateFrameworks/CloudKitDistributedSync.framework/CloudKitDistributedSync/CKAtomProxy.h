@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned long long)version;
- (id)value;
- (id)timestamp;
- (id)references;
- (id)location;
- (unsigned long long)valueSize;
- (unsigned long long)atomType;
- (unsigned char)atomBehavior;
- (void)copyValueBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
