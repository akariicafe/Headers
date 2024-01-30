@interface CKDistributedTimestampProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned long long)clock;
- (unsigned char)modifier;
- (id)timestamp;
- (id)siteIdentifier;
- (BOOL)unordered;
- (void)copySiteIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (id)distributedSiteIdentifier;
- (unsigned long long)siteIdentifierSize;

@end
