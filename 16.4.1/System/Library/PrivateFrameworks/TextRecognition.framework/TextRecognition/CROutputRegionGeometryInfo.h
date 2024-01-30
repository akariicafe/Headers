@interface CROutputRegionGeometryInfo : CRImageSpaceQuad

@property struct CGSize { double width; double height; } cachedSize;
@property (readonly) double estimatedLineHeight;
@property (readonly) struct CGVector { double dx; double dy; } baselineVector;

- (struct CGSize { double x0; double x1; })size;
- (id)initFromOutputRegion:(id)a0;
- (id)mutualGeometryInfoWith:(id)a0;

@end
