@class LKBacktraceLogger, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface LKHangDetectionQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (nonatomic) double threshold;
@property (retain, nonatomic) LKBacktraceLogger *backtraceLogger;
@property (copy, nonatomic) NSArray *lastPrintedCallStack;

- (id)init;
- (void).cxx_destruct;
- (void)queueBlock:(id /* block */)a0;
- (id)initWithQoS:(unsigned int)a0 hangThreshold:(double)a1;

@end
