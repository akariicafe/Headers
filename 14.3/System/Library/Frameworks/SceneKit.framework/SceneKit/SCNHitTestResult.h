@class SCNNode;

@interface SCNHitTestResult : NSObject {
    struct __C3DHitTestResult { } *_result;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdLocalCoordinates;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdWorldCoordinates;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdLocalNormal;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ simdWorldNormal;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } simdModelTransform;
@property (readonly, nonatomic) SCNNode *node;
@property (readonly, nonatomic) long long geometryIndex;
@property (readonly, nonatomic) long long faceIndex;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } localCoordinates;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } worldCoordinates;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } localNormal;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } worldNormal;
@property (readonly, nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } modelTransform;
@property (readonly, nonatomic) SCNNode *boneNode;

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray { } *)a0;

- (id)initWithResult:(struct __C3DHitTestResult { } *)a0;
- (void)dealloc;
- (id)description;
- (struct CGPoint { double x0; double x1; })textureCoordinatesWithMappingChannel:(long long)a0;
- (struct CGPoint { double x0; double x1; })textureCoordinate;

@end
