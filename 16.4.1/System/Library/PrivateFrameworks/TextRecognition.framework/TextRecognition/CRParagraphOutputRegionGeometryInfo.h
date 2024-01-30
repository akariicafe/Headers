@class CROutputRegionGeometryInfo;

@interface CRParagraphOutputRegionGeometryInfo : CROutputRegionGeometryInfo

@property (readonly) CROutputRegionGeometryInfo *firstLine;
@property (readonly) CROutputRegionGeometryInfo *lastLine;
@property (readonly) BOOL isCenterJustified;

- (void).cxx_destruct;
- (id)initFromParagraphOutputRegion:(id)a0;

@end
