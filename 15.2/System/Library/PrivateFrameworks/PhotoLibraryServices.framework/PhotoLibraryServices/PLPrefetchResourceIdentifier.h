@class NSString;

@interface PLPrefetchResourceIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *assetUuid;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned long long cplType;

+ (id)resourceDescriptionWithAssetUuid:(id)a0 resourceVersion:(unsigned int)a1 cplType:(unsigned long long)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetUuid:(id)a0 version:(unsigned int)a1 cplType:(unsigned long long)a2;
- (unsigned long long)hash;

@end
