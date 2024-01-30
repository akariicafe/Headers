@interface WiFiUsageLQMKernelSamplePerACTxStatsMcast : WiFiUsageLQMKernelSamplePerACTxStats

@property (readonly, nonatomic) unsigned long long txMcast;
@property (readonly, nonatomic) unsigned long long txMcastSuccessPerc;
@property (readonly, nonatomic) unsigned long long txMcastAllFailPerc;
@property (readonly, nonatomic) unsigned long long txMcastDroppedPerc;
@property (readonly, nonatomic) unsigned long long txMcastNoBuffPerc;
@property (readonly, nonatomic) unsigned long long txMcastNoResPerc;
@property (readonly, nonatomic) unsigned long long txMcastNoAckPerc;
@property (readonly, nonatomic) unsigned long long txMcastChipModeErrPerc;
@property (readonly, nonatomic) unsigned long long txMcastExpiredPerc;
@property (readonly, nonatomic) unsigned long long txMcastFailPerc;
@property (readonly, nonatomic) unsigned long long txMcastFwFreePerc;
@property (readonly, nonatomic) unsigned long long txMcastMaxRetriesPerc;
@property (readonly, nonatomic) unsigned long long txMcastForceExpirePerc;

- (void)transformTXStats;

@end
