@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _callstack;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _asyncCallstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1 recordFramePointers:(BOOL)a2;
- (unsigned long long *)stackFramePointers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)backtraceLength;
- (unsigned long long *)asyncBacktrace;
- (unsigned long long *)backtrace;
- (void)dealloc;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned int)thread;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (int)threadState;
- (id)description;
- (void)setThreadState:(int)a0;
- (unsigned int)asyncBacktraceLength;
- (unsigned long long)dispatchQueueSerialNumber;

@end
