@class NSData;

@interface HMDLocationEventModel : HMDEventModel

@property (retain, nonatomic) NSData *region;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3;

@end
