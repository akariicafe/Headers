@class NSString, AWDNFCHCIActivityTimeout;

@interface NFAWDActivityTimeout : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int spid;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) unsigned int commandResult;
@property (nonatomic) unsigned int timeoutValue;
@property (nonatomic) unsigned int expressType;
@property (retain, nonatomic) AWDNFCHCIActivityTimeout *metric;
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
