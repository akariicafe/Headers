@class GainValueArray;

@interface SparseAndDenseBandData : NSObject {
    GainValueArray *sparse;
    GainValueArray *sparse_static_scene;
    GainValueArray *dense;
}

- (void).cxx_destruct;

@end
