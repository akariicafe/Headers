@class NSString, NSOperationQueue, NSObject, DMCBacktraceLogger;
@protocol OS_dispatch_queue;

@interface DMCHangDetectionQueue : NSObject

@property (copy, nonatomic) NSString *owner;
@property (retain, nonatomic) NSOperationQueue *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic) double threshold;
@property (retain, nonatomic) DMCBacktraceLogger *backtraceLogger;
@property (nonatomic) BOOL shouldDumpStackshot;

- (void)waitUntilAllBlocksAreFinished;
- (void).cxx_destruct;
- (void)queueBlock:(id /* block */)a0;
- (id)init;
- (id)initWithQoS:(long long)a0 hangThreshold:(double)a1 owner:(id)a2;

@end
