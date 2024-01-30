@interface VMUBacktrace : NSObject <NSCopying> {
    int _flavor;
    struct { struct { double t_begin; double t_end; int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _callstack;
}

- (void)setStartTime:(double)a0;
- (unsigned int)thread;
- (void)setLengthTime:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)threadState;
- (unsigned long long *)backtrace;
- (void)setEndTime:(double)a0;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (void)setThreadState:(int)a0;
- (id)description;
- (unsigned long long *)stackFramePointers;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned int)backtraceLength;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1 recordFramePointers:(BOOL)a2;
- (id)initWithTask:(unsigned int)a0 thread:(unsigned int)a1 is64Bit:(BOOL)a2;

@end
