@class NSString, AWDNFCHCEVASSelectEvent;

@interface NFAWDVASSelect : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int mobileCapabilities;
@property (nonatomic) unsigned int swStatus;
@property (retain, nonatomic) AWDNFCHCEVASSelectEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
