@class NSNumber, NSString, NSDate;

@interface CDDMStringAttribute : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *cumulativeComputeUtilizationGauge;
@property (retain, nonatomic) NSNumber *cumulativeIoReadBytesGauge;
@property (retain, nonatomic) NSNumber *cumulativeIoWriteBytesGauge;
@property (retain, nonatomic) NSNumber *cumulativeMillijoulesGauge;
@property (retain, nonatomic) NSNumber *cumulativeNetworkBytesGauge;
@property (retain, nonatomic) NSNumber *fallingEdge;
@property (retain, nonatomic) NSNumber *forecastFlavor;
@property (retain, nonatomic) NSNumber *forecastPeerScore;
@property (retain, nonatomic) NSNumber *forecastScoresValid;
@property (retain, nonatomic) NSNumber *forecastTemporalScore;
@property (retain, nonatomic) NSNumber *forecastWindowVariant;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *risingEdge;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSNumber *category;

@end
