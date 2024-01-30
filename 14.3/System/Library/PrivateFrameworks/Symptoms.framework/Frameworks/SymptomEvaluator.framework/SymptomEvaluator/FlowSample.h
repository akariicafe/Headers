@interface FlowSample : NSObject {
    double _minRxThroughput;
    double _maxRxThroughput;
    double _minTxThroughput;
    double _maxTxThroughput;
}

@property (nonatomic) double elapsedTime;
@property (nonatomic) unsigned long long totalObservedIfTypeRxBytes;
@property (nonatomic) unsigned long long totalObservedIfTypeTxBytes;
@property (readonly, nonatomic) double minRxThroughput;
@property (readonly, nonatomic) double averageRxThroughput;
@property (readonly, nonatomic) double maxRxThroughput;
@property (readonly, nonatomic) double minTxThroughput;
@property (readonly, nonatomic) double averageTxThroughput;
@property (readonly, nonatomic) double maxTxThroughput;
@property (readonly, nonatomic) BOOL isIdle;

- (id)description;
- (void)accumulateFrom:(id)a0;

@end
