@class NSDictionary;

@interface VGMLSegmentationModel : VGMLImageToMultiFloatsModel {
    NSDictionary *_outputLayerNameRemap;
}

@property (readonly, nonatomic) unsigned long long inputImageWidth;
@property (readonly, nonatomic) unsigned long long inputImageHeight;
@property (readonly, nonatomic) unsigned long long outputSegmentationMapWidth;
@property (readonly, nonatomic) unsigned long long outputSegmentationMapHeight;
@property (readonly, nonatomic) NSDictionary *outputLayersDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)_runModel:(struct __CVBuffer { } *)a0;
- (BOOL)hasGlasses:(struct __CVBuffer { } *)a0;
- (void)inferInputImage:(struct __CVBuffer { } *)a0 toOutput:(id)a1;
- (id)initWithModelPath:(id)a0 error:(id *)a1;
- (id)segmentationMaps:(struct __CVBuffer { } *)a0;

@end
