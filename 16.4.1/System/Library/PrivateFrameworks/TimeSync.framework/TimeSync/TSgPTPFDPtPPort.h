@class TSgPTPPortStatistics, TSXgPTPFDPtPPort;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    TSXgPTPFDPtPPort *_implXPC;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;
@property (readonly, nonatomic) char localPDelayLogMeanInterval;
@property (readonly, nonatomic) char remotePDelayLogMeanInterval;
@property (readonly, nonatomic) BOOL multipleRemotes;
@property (readonly, nonatomic) BOOL measuringPDelay;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingMeasuringPDelay;
+ (id)keyPathsForValuesAffectingMultipleRemotes;
+ (id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;

- (void).cxx_destruct;
- (BOOL)measuringPDelay;
- (BOOL)multipleRemotes;
- (id)initWithImplXPC:(id)a0;
- (char)localPDelayLogMeanInterval;
- (char)remotePDelayLogMeanInterval;
- (void)updateWithXPCStatistics:(id)a0;

@end
