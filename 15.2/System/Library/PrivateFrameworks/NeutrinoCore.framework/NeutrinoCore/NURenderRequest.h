@class NURenderContext, NSString, NSArray, NUPriority, NUComposition, NSObject;
@protocol OS_dispatch_queue, NUDevice;

@interface NURenderRequest : NSObject <NSCopying> {
    long long _copiedFromRequestNumber;
    long long _parentRequestNumber;
}

@property (readonly, copy, nonatomic) NSString *additionalDebugInfo;
@property (nonatomic) long long requestNumber;
@property (copy) NUComposition *internalComposition;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property double submitTime;
@property (copy) id /* block */ completionBlock;
@property (retain) id voucher;
@property (copy, nonatomic) NUComposition *composition;
@property (nonatomic) long long sampleMode;
@property (copy, nonatomic) NSArray *pipelineFilters;
@property (retain, nonatomic) id<NUDevice> device;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NUPriority *priority;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (retain, nonatomic) NURenderContext *renderContext;
@property BOOL shouldCoalesceUpdates;

- (id)initWithRequest:(id)a0;
- (id)initWithComposition:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (void)takePropertiesFromRequest:(id)a0;
- (void)submitGeneric:(id /* block */)a0;
- (void)submitGenericConfiguringRequest:(id /* block */)a0 completion:(id /* block */)a1;
- (id)submitGenericSynchronous:(out id *)a0;
- (void)introspectPrepare:(id /* block */)a0;

@end
