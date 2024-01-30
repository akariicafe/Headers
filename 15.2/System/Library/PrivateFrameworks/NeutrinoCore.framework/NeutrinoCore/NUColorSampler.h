@class NSString, NUColorSpace, NUImageDataRequest, NSObject, NUComposition;
@protocol OS_dispatch_queue;

@interface NUColorSampler : NSObject <NUTimeBased>

@property (readonly, nonatomic) NUImageDataRequest *request;
@property (copy, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic) long long sampleRadius;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) BOOL shouldCoalesceUpdates;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)_pipelineFilters;
- (id)initWithComposition:(id)a0 responseQueue:(id)a1;
- (void)sampleColorAt:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (void)configureRequest:(id)a0 forSamplingAtPoint:(struct { long long x0; long long x1; })a1;

@end
