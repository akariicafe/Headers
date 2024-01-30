@interface VKAnalyticsDataScannerEvent : VKAnalyticsEvent

@property (nonatomic) double feedDuration;
@property (nonatomic) BOOL didScanForText;
@property (nonatomic) BOOL didScanForBarcodes;
@property (readonly, nonatomic) BOOL isHealth;

- (long long)type;
- (id)coreAnalyticsDictionary;
- (id)eventKey;
- (id)description;
- (id)initWithFeedDuration:(double)a0 scannedForText:(BOOL)a1 scannedForBarcodes:(BOOL)a2 customIdentifier:(id)a3;

@end
