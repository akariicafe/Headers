@class NSString, AWDNFCVASTransactionExceptionEvent;

@interface NFAWDVASTransactionException : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int swStatus;
@property (retain, nonatomic) AWDNFCVASTransactionExceptionEvent *metric;
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
