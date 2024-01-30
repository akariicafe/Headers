@class HDSyncIdentityEntity, HDSyncIdentity;

@interface HDConcreteSyncIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HDSyncIdentity *identity;
@property (readonly, copy, nonatomic) HDSyncIdentityEntity *entity;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
