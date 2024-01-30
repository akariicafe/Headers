@class NSString, AWDNFCTSMConnectivityExceptionEvent;

@interface NFAWDTSMConnectivityException : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int errorCode;
@property (retain, nonatomic) AWDNFCTSMConnectivityExceptionEvent *metric;
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
