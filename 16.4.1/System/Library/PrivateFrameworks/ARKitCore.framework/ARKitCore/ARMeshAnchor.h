@class ARMeshGeometry;

@interface ARMeshAnchor : ARAnchor

@property (readonly, nonatomic) void /* unknown type, empty encoding */ corner;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ extent;
@property (readonly, nonatomic) double timestamp;
@property (nonatomic) double maxExtentError;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (readonly, nonatomic) ARMeshGeometry *geometry;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)initWithGeometry:(id)a0 atTimestamp:(double)a1 identifier:(id)a2;
- (id)initWithGeometry:(id)a0 atTimestamp:(double)a1 identifier:(id)a2 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (id)initWithGeometry:(id)a0 atTimestamp:(double)a1 identifier:(id)a2 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (id)initWithGeometry:(id)a0 atTimestamp:(double)a1 identifier:(id)a2 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 voxelSize:(double)a4;
- (id)initWithGeometry:(id)a0 atTimestamp:(double)a1 identifier:(id)a2 visionTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4;
- (id)tracingEntry;

@end
