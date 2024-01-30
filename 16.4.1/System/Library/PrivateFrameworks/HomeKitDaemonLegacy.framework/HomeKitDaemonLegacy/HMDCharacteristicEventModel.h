@interface HMDCharacteristicEventModel : HMDCharacteristicEventBaseModel

@property (retain, nonatomic) id eventValue;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3 checkForSupport:(BOOL)a4 error:(id *)a5;

@end
