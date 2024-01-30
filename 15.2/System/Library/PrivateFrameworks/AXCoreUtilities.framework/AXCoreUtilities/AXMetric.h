@class NSString, NSMutableArray, AXMetricSession;

@interface AXMetric : NSObject <NSSecureCoding, AXMetricContainer>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct pc_session { } *perfCheckSession;
@property (retain, nonatomic) NSMutableArray *childMetrics;
@property (weak, nonatomic) AXMetricSession *session;
@property (nonatomic) long long dirtyMemory;
@property (nonatomic) long long dirtyMemoryDelta;
@property (nonatomic) long long dirtyMemoryPeak;
@property (nonatomic) long long dirtyMemoryPeakDelta;
@property (nonatomic) long long dirtyMemoryPeakLifetime;
@property (nonatomic) long long cpuTime;
@property (nonatomic) long long cpuInstructions;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) BOOL measurementsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithName:(id)a0 session:(id)a1;
- (void)_startMeasurement;
- (void)_endMeasurement;
- (void)_appendToReport:(id)a0 withIndentation:(long long)a1;
- (void)measure:(id)a0 execute:(id /* block */)a1;
- (id)measure:(id)a0 tryExecute:(id /* block */)a1;
- (id)startMeasure:(id)a0;
- (void)dealloc;
- (id)_formatKbAsMbString:(long long)a0;
- (id)_formatDeltaKbAsMbString:(long long)a0;

@end
