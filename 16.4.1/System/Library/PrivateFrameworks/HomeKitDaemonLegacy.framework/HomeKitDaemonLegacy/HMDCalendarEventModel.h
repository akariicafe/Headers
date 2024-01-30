@class NSData;

@interface HMDCalendarEventModel : HMDEventModel

@property (retain, nonatomic) NSData *fireDateComponents;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3;

@end
