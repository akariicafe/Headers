@class NSString, AWDNFCFieldOffEvent;

@interface NFAWDFieldOff : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCFieldOffEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)a0;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
