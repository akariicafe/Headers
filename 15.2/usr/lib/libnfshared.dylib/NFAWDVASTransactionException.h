@class NSString, AWDNFCVASTransactionExceptionEvent;

@interface NFAWDVASTransactionException : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int swStatus;
@property (retain, nonatomic) AWDNFCVASTransactionExceptionEvent *metric;
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
