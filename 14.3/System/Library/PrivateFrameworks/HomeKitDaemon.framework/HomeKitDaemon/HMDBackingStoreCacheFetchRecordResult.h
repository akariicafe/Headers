@class NSUUID, NSData, CKRecord, HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject

@property (readonly, nonatomic) HMDBackingStoreCacheGroup *group;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) unsigned long long encoding;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGroup:(id)a0 record:(id)a1 data:(id)a2 encoding:(unsigned long long)a3 uuid:(id)a4;

@end
