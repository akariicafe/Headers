@class HDCloudSyncStoreRecord, HDCloudSyncZone, HDCloudSyncStore, CKContainer;

@interface HDCloudSyncTarget : NSObject <NSCopying>

@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) HDCloudSyncZone *zone;
@property (readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord;
@property (readonly, nonatomic) HDCloudSyncStore *store;
@property (readonly, nonatomic) unsigned long long options;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPurpose:(long long)a0 container:(id)a1 zone:(id)a2 storeRecord:(id)a3 store:(id)a4 options:(unsigned long long)a5;
- (id)targetByAddingOptions:(unsigned long long)a0;

@end
