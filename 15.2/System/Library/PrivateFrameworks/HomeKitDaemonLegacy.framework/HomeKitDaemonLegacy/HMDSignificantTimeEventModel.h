@class NSString, NSData;

@interface HMDSignificantTimeEventModel : HMDEventModel

@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSData *offset;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3;

@end
