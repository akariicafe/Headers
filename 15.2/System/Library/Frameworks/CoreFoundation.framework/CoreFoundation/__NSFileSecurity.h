@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding> {
    struct _filesec { } *_filesec;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)__new:(struct _filesec { } *)a0;

- (BOOL)setGroup:(unsigned int)a0;
- (BOOL)setOwnerUUID:(unsigned char[16])a0;
- (BOOL)setMode:(unsigned short)a0;
- (BOOL)setOwner:(unsigned int)a0;
- (BOOL)getMode:(unsigned short *)a0;
- (BOOL)setAccessControlList:(struct _acl { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)getGroupUUID:(unsigned char[16] *)a0;
- (BOOL)getOwnerUUID:(unsigned char[16] *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)setGroupUUID:(unsigned char[16])a0;
- (struct _filesec { } *)_filesec;
- (id)initWithCoder:(id)a0;
- (BOOL)getOwner:(unsigned int *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)getGroup:(unsigned int *)a0;
- (BOOL)copyAccessControlList:(struct _acl **)a0;
- (BOOL)clearProperties:(unsigned long long)a0;

@end
