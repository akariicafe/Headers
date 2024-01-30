@class NSString, AWDNFCPTOperation;

@interface NFAWDPTOperation : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCPTOperation *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setErrorCode:(unsigned int)a0;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)setOperationType:(unsigned int)a0;
- (void)setErrorStep:(unsigned int)a0;
- (void)setAwdErrorCode:(unsigned int)a0;

@end
