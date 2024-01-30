@class NSArray, NSString;
@protocol NUScalePolicy;

@interface NUVisionDetectionRequest : NURenderRequest <NUTimeBased>

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (copy, nonatomic) NSArray *visionRequests;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUpRequests:(id)a0;

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)submitGenericSynchronous:(out id *)a0;

@end
