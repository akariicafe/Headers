@interface MPSBinaryImageKernel : MPSKernel {
    int _checkFlags;
    void /* function */ *_encode;
    void *_encodeData;
    const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *_preferredTileSize;
}

@property (nonatomic) struct { long long x; long long y; long long z; } primaryOffset;
@property (nonatomic) struct { long long x; long long y; long long z; } secondaryOffset;
@property (nonatomic) unsigned long long primaryEdgeMode;
@property (nonatomic) unsigned long long secondaryEdgeMode;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRect;

- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)debugDescription;
- (id)init;
- (void)encodeToCommandBuffer:(id)a0 primaryImage:(id)a1 secondaryImage:(id)a2 destinationImage:(id)a3;
- (BOOL)encodeToCommandBuffer:(id)a0 inPlacePrimaryTexture:(id *)a1 secondaryTexture:(id)a2 fallbackCopyAllocator:(id /* block */)a3;
- (BOOL)encodeToCommandBuffer:(id)a0 primaryTexture:(id)a1 inPlaceSecondaryTexture:(id *)a2 fallbackCopyAllocator:(id /* block */)a3;
- (void)encodeToCommandBuffer:(id)a0 primaryTexture:(id)a1 secondaryTexture:(id)a2 destinationTexture:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 primaryImage:(id)a2 secondaryImage:(id)a3 destinationImage:(id)a4;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 primaryTexture:(id)a2 secondaryTexture:(id)a3 destinationTexture:(id)a4;
- (struct MPSRegion { struct MPSOrigin { double x0; double x1; double x2; } x0; struct MPSSize { double x0; double x1; double x2; } x1; })primarySourceRegionForDestinationSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (struct MPSRegion { struct MPSOrigin { double x0; double x1; double x2; } x0; struct MPSSize { double x0; double x1; double x2; } x1; })secondarySourceRegionForDestinationSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;

@end
