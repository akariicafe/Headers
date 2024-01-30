@class HDCloudSyncStoreRecord, HDCloudSyncZone, HDCloudSyncZoneIdentifier, HDCloudSyncStore, CKContainer;

@interface HDCloudSyncTarget : NSObject <NSCopying>

@property (retain, nonatomic) HDCloudSyncZone *zone;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord;
@property (readonly, nonatomic) HDCloudSyncStore *store;
@property (readonly, nonatomic) unsigned long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPurpose:(long long)a0 container:(id)a1 zoneIdentifier:(id)a2 storeRecord:(id)a3 store:(id)a4 options:(unsigned long long)a5;
- (id)targetByAddingOptions:(unsigned long long)a0;
- (id)targetByUpdatingPurpose:(long long)a0;

@end
