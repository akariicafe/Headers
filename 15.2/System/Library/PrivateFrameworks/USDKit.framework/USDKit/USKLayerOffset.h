@interface USKLayerOffset : NSObject {
    struct SdfLayerOffset { double _offset; double _scale; } _layerOffset;
}

@property (nonatomic) double offset;
@property (nonatomic) double scale;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id).cxx_construct;
- (struct SdfLayerOffset { double x0; double x1; })sdfLayerOffset;
- (id)initWithSdfLayerOffset:(struct SdfLayerOffset { double x0; double x1; })a0;
- (id)initWithOffset:(double)a0 scale:(double)a1;

@end
