@class NSNumber, NSString, NSDate;

@interface CDDMBookkeeping : NSManagedObject

@property (retain, nonatomic) NSNumber *maxAttributeIntegerId;
@property (retain, nonatomic) NSNumber *maxForecastGroupId;
@property (retain, nonatomic) NSNumber *maxPoolIntegerId;
@property (retain, nonatomic) NSNumber *systemCumulativeComputeUtilizationGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeIoReadBytesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeIoWriteBytesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeMillijoulesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativeNetworkBytesGauge;
@property (retain, nonatomic) NSNumber *systemCumulativePushesGauge;
@property (retain, nonatomic) NSString *deviceDescription;
@property (retain, nonatomic) NSNumber *databaseVersion;
@property (retain, nonatomic) NSDate *oldestEntryDate;
@property (retain, nonatomic) NSDate *newestEntryDate;
@property (retain, nonatomic) NSNumber *budgetVersion;

@end
