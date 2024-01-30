@class NSString, AWDNFCFieldOnEvent;

@interface NFAWDFieldOn : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int technology;
@property (retain, nonatomic) AWDNFCFieldOnEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
