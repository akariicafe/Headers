@class NSNumber, NSString, NSDate;

@interface CDDMDeviceMapper : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *networkQuality;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *integerId;

@end
