@class NSSet, HMDBackingStoreModelObject, NSString, HMFMessage;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>

@property (readonly, copy, nonatomic) HMFMessage *message;
@property (readonly, nonatomic) HMDBackingStoreModelObject *change;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
