@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (unsigned char)type;
- (id)timestamp;
- (id)reference;
- (id)location;

@end
