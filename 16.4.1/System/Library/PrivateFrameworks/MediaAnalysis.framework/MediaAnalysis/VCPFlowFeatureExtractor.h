@class NSString, NSArray;

@interface VCPFlowFeatureExtractor : VCPEspressoModel {
    int _numLevels;
    NSString *_inputBlobName;
    NSArray *_featureBlobNames;
    NSArray *_featureChannels;
}

- (void).cxx_destruct;
- (int)bindWithBuffers:(struct __CVBuffer { } *)a0 imgFeature:(struct { struct { int x0; int x1; int x2; } x0[7]; struct __CVBuffer *x1[7]; } *)a1;
- (int)extractFeatureFromImage:(struct __CVBuffer { } *)a0 toFeature:(struct { struct { int x0; int x1; int x2; } x0[7]; struct __CVBuffer *x1[7]; } *)a1 callback:(id /* block */)a2;
- (id)initModule:(int)a0 config:(id)a1 cancel:(id /* block */)a2;
- (int)setFeatureShape:(struct { int x0; int x1; int x2; } *)a0 height:(int)a1 width:(int)a2 level:(int)a3;

@end
