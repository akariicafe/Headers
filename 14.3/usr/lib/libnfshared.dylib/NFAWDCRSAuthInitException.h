@class AWDNFCCRSAuthInitExceptionEvent, NSString;

@interface NFAWDCRSAuthInitException : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCCRSAuthInitExceptionEvent *metric;
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
