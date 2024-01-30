@class NSNumber, NSDate;

@interface CDDMBatteryEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *batteryLevel;
@property (retain, nonatomic) NSNumber *computedDischargeRateMilliwatts;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *sampledMilliwatts;
@property (retain, nonatomic) NSNumber *userId;

@end
