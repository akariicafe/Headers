@class TSgPTPPortStatistics;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;
@property (nonatomic) char localPDelayLogMeanInterval;
@property (nonatomic) char remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (BOOL)_commonInitWithService:(id)a0;
- (id)_statistics;
- (void)updateProperties;
- (char)_localPDelayLogMeanInterval;
- (char)_remotePDelayLogMeanInterval;
- (BOOL)_multipleRemotes;
- (BOOL)_measuringPDelay;

@end
