@class ARFaceTrackingData, NSDictionary, NSString, NSError, ARFaceGeometry;

@interface ARFaceAnchor : ARAnchor <ARTrackable> {
    NSDictionary *_blendShapeCoefficientsDictionary;
}

@property (retain, nonatomic) ARFaceTrackingData *trackingData;
@property (nonatomic) BOOL isTracked;
@property (retain, nonatomic) NSError *trackingError;
@property (readonly, nonatomic) ARFaceGeometry *geometry;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } leftEyeTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rightEyeTransform;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ lookAtPoint;
@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)blendShapeToMirroredBlendShapeMapping;
+ (id)blendShapeMapping;
+ (id)mirroredBlendShapeMapping;

- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (const void *)imageVertices;
- (void /* unknown type, empty encoding */)gazePoint;
- (id)initWithIdentifier:(id)a0 trackingData:(id)a1;
- (id)initWithExistingFaceAnchor:(id)a0 tracked:(BOOL)a1 trackingError:(id)a2;
- (BOOL)isEqualToFaceAnchor:(id)a0;

@end
