@class NSUUID, HMDBackingStore, NSString;

@interface HMDBackingStoreHandler : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDBackingStore *backingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)runTransactionWithModel:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (id)backingStoreObjectsForVersion:(long long)a0;
- (void)runTransactionWithModel:(id)a0 options:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)runTransactionWithModels:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)runTransactionWithModels:(id)a0 options:(id)a1 reason:(id)a2 completion:(id /* block */)a3;

@end
