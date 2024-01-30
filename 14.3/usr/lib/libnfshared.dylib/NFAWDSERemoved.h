@class AWDNFCSERemovedEvent, NSString;

@interface NFAWDSERemoved : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) unsigned int reason;
@property (nonatomic) BOOL hasExpressTransactionStarted;
@property (nonatomic) BOOL hasCardEmulationStarted;
@property (retain, nonatomic) AWDNFCSERemovedEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateExceptionUUID:(id)a0;

@end
