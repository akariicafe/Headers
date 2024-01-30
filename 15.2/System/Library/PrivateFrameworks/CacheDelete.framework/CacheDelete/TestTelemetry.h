@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TestTelemetry : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *q;
@property unsigned long long files_deleted;
@property double termination_threshold;
@property double remove_threshold;
@property (retain, nonatomic) NSMutableArray *terminationFailures;
@property (retain, nonatomic) NSMutableArray *removeFailures;

+ (id)testTelemetryWithInfo:(id)a0;

- (id)initWithInfo:(id)a0;
- (unsigned long long)deletes;
- (id)description;
- (void).cxx_destruct;
- (void)addRemoveFailure:(id)a0;
- (void)addTerminationFailure:(id)a0;
- (void)addDeletes:(unsigned long long)a0;

@end
