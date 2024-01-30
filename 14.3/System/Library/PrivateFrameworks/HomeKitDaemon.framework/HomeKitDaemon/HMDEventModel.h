@class NSNumber;

@interface HMDEventModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *endEvent;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 className:(Class)a3 message:(id)a4;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3;

@end
