@class NSString, AWDNFCTSMStartEvent;

@interface NFAWDTSMStart : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int memoryTransientDeselect;
@property (nonatomic) unsigned int memoryTransientReset;
@property (nonatomic) unsigned int memoryPersistent;
@property (nonatomic) unsigned int memoryIndexTable;
@property (retain, nonatomic) AWDNFCTSMStartEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
