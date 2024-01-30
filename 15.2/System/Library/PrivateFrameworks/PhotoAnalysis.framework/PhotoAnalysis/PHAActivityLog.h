@class NSDate;

@interface PHAActivityLog : NSObject {
    double _absoluteStartTime;
    double _absoluteEndTime;
    unsigned long long _graphRequestInterruptionCount;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long status;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)markProcessingStopped:(unsigned long long)a0;
- (void)markProcessingInterruptedByGraphRequest;

@end
