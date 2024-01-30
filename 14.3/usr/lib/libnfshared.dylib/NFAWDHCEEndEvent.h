@class NSString, AWDNFCHCEEndEvent;

@interface NFAWDHCEEndEvent : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCHCEEndEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;

@end
