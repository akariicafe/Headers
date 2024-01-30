@class NSArray, NSString, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface MXMInstrument : NSObject

@property (class, readonly, nonatomic) MXMInstrument *activeInstrument;

@property BOOL active;
@property struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct { unsigned long long x0; unsigned long long x1; } x11; struct { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; void *x14; void *x15; void *x16; void **x17; BOOL x18; void *x19; double x20; double x21; } *currentIteration;
@property (readonly) NSObject<OS_dispatch_queue> *instrumentalsQueue;
@property (readonly) BOOL didQuiesce;
@property (readonly, nonatomic) NSArray *instrumentals;
@property (readonly) NSURL *performanceTraceFileURL;
@property (readonly) NSData *perfMetricsPerfdata;
@property (readonly) NSString *performanceTraceFileSandboxExtensionToken;

+ (void)load;
+ (id)instrumentWithInstrumentals:(id)a0;

- (BOOL)startWithError:(id *)a0;
- (void)dealloc;
- (id)stop;
- (void)start;
- (void).cxx_destruct;
- (id)stopWithError:(id *)a0;
- (id)measureBlock:(id /* block */)a0;
- (void)_setupAndRunWithIteration:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct { unsigned long long x0; unsigned long long x1; } x11; struct { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; void *x14; void *x15; void *x16; void **x17; BOOL x18; void *x19; double x20; double x21; } *)a0 spawnThread:(BOOL)a1 attrs:(struct _opaque_pthread_attr_t { long long x0; char x1[56]; } *)a2 pthread:(struct _opaque_pthread_t **)a3 returnCode:(unsigned long long *)a4;
- (id)_defaultValueWithOption:(id)a0;
- (id)_makeInstrumentalsForIteration:(id)a0 shouldCopy:(BOOL)a1;
- (void)_makePerfDataFromMXMResults:(id)a0 testName:(id)a1;
- (void)_prepareIteration:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct { unsigned long long x0; unsigned long long x1; } x11; struct { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; void *x14; void *x15; void *x16; void **x17; BOOL x18; void *x19; double x20; double x21; } *)a0 options:(id)a1 instrumentals:(id)a2 errors:(id)a3;
- (id)_transitionWithState:(unsigned long long)a0 iteration:(const struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct { unsigned long long x0; unsigned long long x1; } x11; struct { unsigned long long x0; unsigned long long x1; } x12; unsigned long long x13; void *x14; void *x15; void *x16; void **x17; BOOL x18; void *x19; double x20; double x21; } *)a1 instrumentals:(id)a2;
- (id)_validOptionKeys;
- (id)_valueWithOption:(id)a0 userOptions:(id)a1;
- (id)initWithInstrumentals:(id)a0;
- (id)measureAutomatically:(unsigned long long)a0 block:(id /* block */)a1;
- (id)measureAutomatically:(unsigned long long)a0 options:(id)a1 block:(id /* block */)a2;
- (id)measureWithOptions:(id)a0 block:(id /* block */)a1;

@end
