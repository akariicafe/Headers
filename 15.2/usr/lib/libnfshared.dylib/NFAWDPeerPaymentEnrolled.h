@class NSString, AWDNFCPeerPaymentEnrolled;

@interface NFAWDPeerPaymentEnrolled : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCPeerPaymentEnrolled *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (void)setErrorCode:(unsigned int)a0;
- (void)setDuration:(unsigned long long)a0;
- (unsigned int)getMetricId;
- (void).cxx_destruct;
- (id)init;
- (void)setErrorStep:(unsigned int)a0;

@end
