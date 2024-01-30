@class SIResourceFactory, SIScaler, SIUpsampler, SIPeopleSegmentation;

@interface SIPeopleSegmentationAlgorithm : NSObject {
    SIResourceFactory *_factory;
    SIPeopleSegmentation *_segmentation;
    SIScaler *_scalerOne;
    SIUpsampler *_scalerTwo;
}

- (void).cxx_destruct;
- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 outputResolution:(struct CGSize { double x0; double x1; })a1;
- (void)runWithInput:(struct __CVBuffer { } *)a0 output:(id)a1;

@end
