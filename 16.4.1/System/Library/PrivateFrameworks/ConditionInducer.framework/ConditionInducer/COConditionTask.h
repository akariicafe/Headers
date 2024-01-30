@class NSString, NSArray, NSFileHandle, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface COConditionTask : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *termination_sem;
@property (copy, nonatomic) NSString *launchPath;
@property (retain, nonatomic) NSArray *arguments;
@property (retain, nonatomic) NSMutableArray *taskFileHandleArray;
@property (retain, nonatomic) NSString *stdoutFname;
@property (retain, nonatomic) NSString *stderrFname;
@property (retain, nonatomic) NSString *stdinFname;
@property (retain, nonatomic) NSFileHandle *stdinFileHandle;
@property (retain, nonatomic) NSFileHandle *stdoutFileHandle;
@property (retain, nonatomic) NSFileHandle *stderrFileHandle;
@property (nonatomic) int processIdentifier;
@property (nonatomic) double executionTime;
@property (nonatomic) int endStatus;
@property BOOL running;
@property (nonatomic) BOOL slowTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (void)terminate;
- (id)initWithCommand:(id)a0 arguments:(id)a1;
- (BOOL)suspend;
- (void)interrupt;
- (void)stop;
- (BOOL)start;
- (id)description;
- (void).cxx_destruct;
- (BOOL)resume;
- (BOOL)launchTask:(id *)a0;
- (int)signalRunningTask:(int)a0;
- (id)stderrFromResults;
- (id)stdoutFromResults;
- (void)stopTask;
- (void)waitForExitInformation:(int)a0;
- (BOOL)waitForTaskWithTimeout:(unsigned int)a0;

@end
