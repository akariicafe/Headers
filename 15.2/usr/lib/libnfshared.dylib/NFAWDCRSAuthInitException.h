@class AWDNFCCRSAuthInitExceptionEvent, NSString;

@interface NFAWDCRSAuthInitException : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCCRSAuthInitExceptionEvent *metric;
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
