@class NSMutableSet, FPItemID;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>

@property (class, readonly) NSMutableSet *knownFileProviderIdentifiersSoFar;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) FPItemID *itemID;

+ (Class)versionedFileIdentifierClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
