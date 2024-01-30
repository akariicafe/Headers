@class NSUUID, HMDBackingStore, NSString;

@interface HMDBackingStoreHandler : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDBackingStore *backingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)privateDescription;
- (id)logIdentifier;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)runTransactionWithModel:(id)a0 completion:(id /* block */)a1;
- (id)backingStoreObjectsForVersion:(long long)a0;
- (void)runTransactionWithModels:(id)a0 completion:(id /* block */)a1;

@end
