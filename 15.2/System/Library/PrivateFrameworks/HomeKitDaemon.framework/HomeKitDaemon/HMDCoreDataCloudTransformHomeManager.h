@interface HMDCoreDataCloudTransformHomeManager : HMDCoreDataCloudTransformableLocalModelOnly

+ (id)fixUpPrimaryHomeCounterForPrimaryHome:(id)a0 primaryHomeModelID:(id)a1;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

@end
