@class AWDNFCPeerPaymentRequest, NSString;

@interface NFAWDPeerPaymentRequest : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCPeerPaymentRequest *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setType:(unsigned int)a0;
- (void)setErrorCode:(unsigned int)a0;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)setDuration:(unsigned long long)a0;
- (void)setErrorStep:(unsigned int)a0;

@end
