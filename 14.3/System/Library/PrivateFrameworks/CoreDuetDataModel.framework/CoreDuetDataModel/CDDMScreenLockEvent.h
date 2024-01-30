@class NSNumber, NSDate;

@interface CDDMScreenLockEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *displayId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *lockState;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *userId;

@end
