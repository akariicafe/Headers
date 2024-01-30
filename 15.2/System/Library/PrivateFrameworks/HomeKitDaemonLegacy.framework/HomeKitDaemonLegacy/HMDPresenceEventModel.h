@class NSString, NSNumber, NSArray;

@interface HMDPresenceEventModel : HMDEventModel

@property (retain, nonatomic) NSString *presenceType;
@property (retain, nonatomic) NSNumber *activation;
@property (retain, nonatomic) NSArray *users;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3;

@end
