@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSString *transactionIdentifier;

- (id)init;
- (void)addFieldsFromPurchaseResponse:(id)a0;

@end
