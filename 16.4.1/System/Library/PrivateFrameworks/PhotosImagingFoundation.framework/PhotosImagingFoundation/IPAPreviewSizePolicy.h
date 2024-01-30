@class NSString, IPAImageSizePolicy;

@interface IPAPreviewSizePolicy : NSObject {
    id _style;
    IPAImageSizePolicy *_sizePolicy;
    id /* block */ _styleNeededThreshold;
    id /* block */ _styleProducedThreshold;
}

@property (retain) NSString *suffix;
@property (readonly) NSString *name;

- (id)description;
- (id)style;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithName:(id)a0 style:(id)a1 sizePolicy:(id)a2 styleNeededThreshold:(id /* block */)a3 styleProducedThreshold:(id /* block */)a4;
- (id)initWithName:(id)a0 suffix:(id)a1 style:(id)a2 sizePolicy:(id)a3 styleNeededThreshold:(id /* block */)a4 styleProducedThreshold:(id /* block */)a5;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })integralTransformSize:(struct CGSize { double x0; double x1; })a0;
- (id)sizeTransformationPolicy;
- (BOOL)styleCanBeProducedFromSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)styleIsNeededForFullSize:(struct CGSize { double x0; double x1; })a0;
- (id)styleShouldBeProducedFrom:(id /* block */)a0;

@end
