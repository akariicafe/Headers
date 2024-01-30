@class HMDBackingStoreCacheGroup, NSString, NSUUID;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping>

@property (readonly, nonatomic) HMDBackingStoreCacheGroup *group;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *parentUuid;
@property (readonly, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 recordName:(id)a1 uuid:(id)a2 parentUuid:(id)a3 type:(id)a4;

@end
