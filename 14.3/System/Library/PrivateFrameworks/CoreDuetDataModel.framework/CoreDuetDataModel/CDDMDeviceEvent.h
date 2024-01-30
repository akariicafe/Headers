@class NSNumber, NSString, NSDate;

@interface CDDMDeviceEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *exchangeDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *isDefaultPairedDevice;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *locallyPresent;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *userId;

@end
