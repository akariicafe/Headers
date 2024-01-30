@class WiFiSettlementConfiguration, NSDate, NSMutableArray, WiFiSettlementContext;
@protocol WiFiScanProvider;

@interface WiFiSettlementObserver : NSObject

@property (retain, nonatomic) id<WiFiScanProvider> scanProvider;
@property (retain, nonatomic) WiFiSettlementContext *currentContext;
@property (nonatomic) unsigned long long consecutiveScansWithoutMatch;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long confidence;
@property (retain, nonatomic) WiFiSettlementConfiguration *configuration;
@property (nonatomic) NSDate *settledDate;

- (void)_callSettlementCallbackWithStatus:(long long)a0 userInfo:(id)a1;
- (void)resetSettlement;
- (void)addSettlementCallback:(id /* block */)a0;
- (id)initWithScanProvider:(id)a0 configuration:(id)a1;
- (void)removeSettlementCallback:(id /* block */)a0;
- (void)_handleScanResults:(id)a0 error:(id)a1 userInfo:(id)a2;
- (void)_updateSettlementStatus:(long long)a0 confidence:(unsigned long long)a1;
- (void).cxx_destruct;

@end
