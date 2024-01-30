@class NUColorSpace, NUHistogramParameters, NSString;
@protocol NUScalePolicy;

@interface NUHistogramRenderRequest : NURenderRequest <NUTimeBased> {
    NUHistogramParameters *_parameters;
}

@property (copy, nonatomic) NUHistogramParameters *parameters;
@property (retain, nonatomic) NUColorSpace *histogramCalculationColorSpace;
@property (retain) id<NUScalePolicy> scalePolicy;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComposition:(id)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)submitSynchronous:(out id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
