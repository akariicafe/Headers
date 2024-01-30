@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { double t_begin; double t_end; int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _callstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (unsigned long long *)stackFramePointers;
- (void)encodeWithCoder:(id)a0;
- (void)setEndTime:(double)a0;
- (int)threadState;
- (id)description;
- (void)setStartTime:(double)a0;
- (unsigned int)backtraceLength;
- (unsigned long long *)backtrace;
- (unsigned int)thread;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)setLengthTime:(double)a0;
- (void)setThreadState:(int)a0;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1 recordFramePointers:(BOOL)a2;
- (unsigned long long)dispatchQueueSerialNumber;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;

@end
