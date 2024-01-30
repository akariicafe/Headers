@class HMDBackingStoreModelObject, CKRecord;

@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject

@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) HMDBackingStoreModelObject *object;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 data:(id)a1 encoding:(unsigned long long)a2 error:(id *)a3;

@end
