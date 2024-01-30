@class NSString, AWDNFCExpressFelicaEndedEvent;

@interface NFAWDExpressFelicaEndedEvent : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCExpressFelicaEndedEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)a0;
- (void)setTimeDeltaFromReference:(unsigned long long)a0;

@end
