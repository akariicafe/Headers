@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>

- (id)value;
- (unsigned long long)version;
- (id)timestamp;
- (id)references;
- (id)location;
- (unsigned char)atomBehavior;
- (unsigned long long)atomType;
- (id)objectCopy;
- (void)copyValueBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
