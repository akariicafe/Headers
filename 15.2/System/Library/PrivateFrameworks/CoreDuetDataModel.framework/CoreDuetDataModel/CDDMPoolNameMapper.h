@class NSNumber, NSString, NSDate;

@interface CDDMPoolNameMapper : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *parentPoolIntegerId;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *maxFraction;

@end
