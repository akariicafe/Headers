@class NSString, NSNumber;

@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3 checkForSupport:(BOOL)a4;


@end
