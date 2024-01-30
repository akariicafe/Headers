@interface FlowHistorySample : NSObject {
    struct { struct { unsigned long long rxBytes; unsigned long long txBytes; unsigned long long openedFlows; unsigned long long closedFlows; } counts[8]; } _flowCountArray;
}

@property (readonly, nonatomic) unsigned long long rxBytes;
@property (readonly, nonatomic) unsigned long long rxAppleStackBytes;
@property (readonly, nonatomic) unsigned long long rxNonAppleStackBytes;
@property (readonly, nonatomic) unsigned long long rxSISBytes;
@property (readonly, nonatomic) unsigned long long txBytes;
@property (readonly, nonatomic) unsigned long long txAppleStackBytes;
@property (readonly, nonatomic) unsigned long long txNonAppleStackBytes;
@property (readonly, nonatomic) unsigned long long txSISBytes;
@property (readonly, nonatomic) unsigned long long openedFlows;
@property (readonly, nonatomic) unsigned long long openedAppleStackFlows;
@property (readonly, nonatomic) unsigned long long openedNonAppleStackFlows;
@property (readonly, nonatomic) unsigned long long openedSISFlows;
@property (readonly, nonatomic) unsigned long long openedRNFFlows;
@property (readonly, nonatomic) unsigned long long closedFlows;
@property (readonly, nonatomic) unsigned long long closedAppleStackFlows;
@property (readonly, nonatomic) unsigned long long closedNonAppleStackFlows;
@property (readonly, nonatomic) unsigned long long closedSISFlows;
@property (readonly, nonatomic) unsigned long long closedRNFFlows;
@property (readonly, nonatomic) unsigned long long currentFlows;
@property (readonly, nonatomic) unsigned long long currentAppleStackFlows;
@property (readonly, nonatomic) unsigned long long currentNonAppleStackFlows;
@property (readonly, nonatomic) unsigned long long currentSISFlows;
@property (nonatomic) double startTimeIntervalSinceReferenceDate;
@property (nonatomic) double elapsedTime;
@property (readonly, nonatomic) double rxThroughput;
@property (readonly, nonatomic) double txThroughput;
@property (readonly, nonatomic) unsigned long long rxThroughputBps;
@property (readonly, nonatomic) unsigned long long txThroughputBps;

- (id)description;
- (void)noteCurent:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x0[8]; } *)a0 previous:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x0[8]; } *)a1;

@end
