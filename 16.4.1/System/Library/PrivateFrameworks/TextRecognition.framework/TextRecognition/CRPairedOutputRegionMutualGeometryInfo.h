@interface CRPairedOutputRegionMutualGeometryInfo : NSObject

@property (readonly) struct CGVector { double dx; double dy; } offsetAlongBaseline;

- (id)initFromGeometryInfo1:(id)a0 geometryInfo2:(id)a1;

@end
