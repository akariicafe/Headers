@class NSMutableArray;

@interface PhysicalInterfaceSampler : FlowHistorian {
    unsigned long long _lastSampledRxIfTypeBytes;
    unsigned long long _lastSampledTxIfTypeBytes;
    double _lastSampleTimeIntervalSinceReferenceDate;
    double _minPhysicalInterfaceRxUsageForSustainedHighThroughput;
    double _minInitialInterfaceRxUsageForSustainedHighThroughput;
    double _minPhysicalInterfaceTxUsageForSustainedHighThroughput;
    double _minInitialInterfaceTxUsageForSustainedHighThroughput;
    double _minConservativePhysicalInterfaceDurationForSustainedHighThroughput;
    double _minResponsivePhysicalInterfaceDurationForSustainedHighThroughput;
    double _defaultMinPhysicalInterfaceRxUsageForSustainedHighThroughput;
    double _defaultMinInitialInterfaceRxUsageForSustainedHighThroughput;
    double _defaultMinPhysicalInterfaceTxUsageForSustainedHighThroughput;
    double _defaultMinInitialInterfaceTxUsageForSustainedHighThroughput;
    double _defaultMinConservativePhysicalInterfaceDurationForSustainedHighThroughput;
    double _defaultMinResponsivePhysicalInterfaceDurationForSustainedHighThroughput;
    BOOL _hasSustainedResponsiveHighInterfaceThroughput;
    BOOL _hasSustainedConservativeHighInterfaceThroughput;
    BOOL _hasSustainedHighInterfaceRxThroughput;
    BOOL _hasSustainedHighInterfaceTxThroughput;
    NSMutableArray *_thresholdChangeHistory;
    long long _ifType;
}

@property (retain, nonatomic) NSMutableArray *interfaceSamples;
@property (nonatomic) long long ifType;
@property (readonly, nonatomic) BOOL pendingInterfaceSampleIsIdle;
@property (nonatomic) unsigned long long totalRxIfTypeBytes;
@property (nonatomic) unsigned long long totalTxIfTypeBytes;
@property (nonatomic) double lastInterfaceTrafficTimestamp;
@property (readonly, nonatomic) BOOL hasSustainedConservativeHighInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedResponsiveHighInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceRxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceTxThroughput;

+ (id)sharedInstanceForInterfaceType:(long long)a0;

- (id)getState:(BOOL)a0;
- (void)restoreDefaults;
- (void)updateAssesments;
- (void)setHasSustainedConservativeHighInterfaceThroughput:(BOOL)a0;
- (BOOL)updateAssesmentHelper:(double)a0;
- (void)ensureNonZeroPhysicalInterfaceThroughputParameters;
- (void)setHasSustainedResponsiveHighInterfaceThroughput:(BOOL)a0;
- (id)init;
- (void)updateInterfaceSamplesWithTime:(double)a0 bumpSamples:(BOOL)a1;
- (int)setConfiguration:(id)a0;
- (void).cxx_destruct;

@end
