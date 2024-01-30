@class NSString, AWDNFCExpressTransactionEndedEvent;

@interface NFAWDExpressTransactionEndedEvent : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) AWDNFCExpressTransactionEndedEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)setTimeDeltaFromReference:(unsigned long long)a0;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
