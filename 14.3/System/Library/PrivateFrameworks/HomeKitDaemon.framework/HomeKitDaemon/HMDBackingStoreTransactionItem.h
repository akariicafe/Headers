@class NSSet, HMDBackingStoreModelObject, NSString, HMFMessage;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>

@property (readonly, nonatomic) HMFMessage *message;
@property (readonly, nonatomic) HMDBackingStoreModelObject *change;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithChange:(id)a0 message:(id)a1;

@end
