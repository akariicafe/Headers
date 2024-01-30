@interface CKDistributedTimestampProxy : CKXStructProxyBase <CKXReadStructProxy>

- (unsigned long long)clock;
- (unsigned char)modifier;
- (id)timestamp;
- (BOOL)unordered;
- (id)siteIdentifier;
- (id)objectCopy;
- (void)copySiteIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
