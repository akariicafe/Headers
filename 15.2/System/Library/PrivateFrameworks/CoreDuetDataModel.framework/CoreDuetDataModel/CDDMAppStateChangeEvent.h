@class NSNumber, NSDate;

@interface CDDMAppStateChangeEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *appState;
@property (retain, nonatomic) NSNumber *computeUtilization;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *ioBytesRead;
@property (retain, nonatomic) NSNumber *ioBytesWritten;
@property (retain, nonatomic) NSNumber *isFront;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *memoryPhysicalFootprint;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *networkRxBytes;
@property (retain, nonatomic) NSNumber *networkTxBytes;
@property (retain, nonatomic) NSNumber *runReason;
@property (retain, nonatomic) NSNumber *usedCellData;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *networkBytes;
@property (retain, nonatomic) NSNumber *ioBytes;

@end
