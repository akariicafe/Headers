@class NSString, CKRecordZoneID;

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneIdentifier;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) long long type;

+ (id)identifierForZone:(id)a0 container:(id)a1 scope:(long long)a2;
+ (long long)_typeForIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEquivalentToZone:(id)a0 container:(id)a1;
- (id)initForZone:(id)a0 container:(id)a1 scope:(long long)a2;
- (BOOL)isEquivalentIgnoringOwnerToZone:(id)a0 container:(id)a1;
- (id)initForZone:(id)a0 container:(id)a1;

@end
