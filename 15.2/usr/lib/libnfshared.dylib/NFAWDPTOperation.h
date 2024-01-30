@class NSString, AWDNFCPTOperation;

@interface NFAWDPTOperation : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCPTOperation *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (void)setErrorCode:(unsigned int)a0;
- (unsigned int)getMetricId;
- (void).cxx_destruct;
- (void)setOperationType:(unsigned int)a0;
- (id)init;
- (void)setErrorStep:(unsigned int)a0;
- (void)setAwdErrorCode:(unsigned int)a0;

@end
