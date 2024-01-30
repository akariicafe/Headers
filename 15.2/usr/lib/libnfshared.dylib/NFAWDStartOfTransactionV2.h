@class AWDNFCHCIStartOfTransactionV2Event, NSString;

@interface NFAWDStartOfTransactionV2 : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) unsigned int commandResult;
@property (nonatomic) unsigned int expressType;
@property (nonatomic) BOOL isLongTransaction;
@property (retain, nonatomic) AWDNFCHCIStartOfTransactionV2Event *metric;
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
