@class NSString, NSMutableArray, NSArray;

@interface AXMetricSession : NSObject <NSSecureCoding, AXMetricContainer>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *childMetrics;
@property (nonatomic) BOOL measurementsEnabled;
@property (retain, nonatomic) NSArray *enabledByEnvironmentVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)generateReport;
- (id)initWithName:(id)a0 measurementsEnabled:(BOOL)a1;
- (id)initWithName:(id)a0 measurementsEnabled:(BOOL)a1 orEnabledByEnvironmentVariables:(id)a2;
- (void)measure:(id)a0 execute:(id /* block */)a1;
- (id)measure:(id)a0 tryExecute:(id /* block */)a1;
- (id)startMeasure:(id)a0;

@end
