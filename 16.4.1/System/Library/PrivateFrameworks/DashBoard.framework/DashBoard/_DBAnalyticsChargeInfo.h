@class NSString;

@interface _DBAnalyticsChargeInfo : _DBAnalyticsTimeAccumulator

@property (nonatomic, getter=isWireless) BOOL wireless;
@property (nonatomic) BOOL didChargeDuringSession;
@property (copy, nonatomic) NSString *current;
@property (copy, nonatomic) NSString *adapterDescription;
@property (copy, nonatomic) NSString *PMUConfiguration;
@property (copy, nonatomic) NSString *voltage;
@property (copy, nonatomic) NSString *wattage;

- (void).cxx_destruct;

@end
