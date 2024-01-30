@class CRImageSpacePolyline, NSString, NSArray;

@interface CRNormalizedPolyline : NSObject <CRCodable, CRPolyline>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct CGSize { double width; double height; } normalizationSize;
@property (retain) CRImageSpacePolyline *denormalizedPolyline;
@property struct CGPath { } *_pathRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) const struct CGPath { } *path;
@property (readonly) NSArray *pointValues;
@property (readonly) unsigned long long pointCount;

- (void)encodeWithCoder:(id)a0;
- (id)crCodableDataRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (void)appendPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPolyline:(id)a0;
- (void)dealloc;
- (id)polylineByAppendingPolyline:(id)a0;
- (id)simplified;
- (void)appendPolyline:(id)a0;
- (void)enumeratePoints:(id /* block */)a0;
- (id)polylineByAppendingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDenormalizedPolyline:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNormalizedPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)initWithNormalizedPointValues:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
