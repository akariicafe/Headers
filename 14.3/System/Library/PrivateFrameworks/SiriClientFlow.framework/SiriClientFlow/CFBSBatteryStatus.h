@class NSString, NSNumber;

@interface CFBSBatteryStatus : SADomainObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSNumber *batteryPercent;
@property (copy, nonatomic) NSNumber *batteryCharging;
@property (copy, nonatomic) NSNumber *lowBattery;

+ (id)objectWithDictionary:(id)a0 context:(id)a1;
+ (id)object;
+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
