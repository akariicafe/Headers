@class NSNumber, NSDate;

@interface CDDMStatisticInteger : NSManagedObject

@property (retain, nonatomic) NSNumber *attributeId;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *statisticKind;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *value;

@end
