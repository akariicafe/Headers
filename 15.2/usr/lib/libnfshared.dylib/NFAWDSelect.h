@class NSData, AWDNFCSEAIDSelectEvent, NSString;

@interface NFAWDSelect : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) NSData *aid;
@property (retain, nonatomic) AWDNFCSEAIDSelectEvent *metric;
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
