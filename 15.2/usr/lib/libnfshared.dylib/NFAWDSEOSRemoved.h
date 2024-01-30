@class AWDNFCSEOSRemovedEvent, NSString;

@interface NFAWDSEOSRemoved : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) unsigned int reason;
@property (nonatomic) BOOL hasExpressTransactionStarted;
@property (nonatomic) BOOL hasCardEmulationStarted;
@property (retain, nonatomic) AWDNFCSEOSRemovedEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void).cxx_destruct;
- (id)init;
- (void)updateExceptionUUID:(id)a0;

@end
