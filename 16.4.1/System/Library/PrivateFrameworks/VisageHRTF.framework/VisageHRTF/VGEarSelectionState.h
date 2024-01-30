@class NSDictionary;

@interface VGEarSelectionState : NSObject

@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL failed;
@property (nonatomic) float progress;
@property (nonatomic) struct VGEarPose { int side; struct { void /* unknown type, empty encoding */ columns[4]; } pose; float yawAngle; float pitchAngle; struct BoundingBox { float xmin; float ymin; float xmax; float ymax; } box; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } landmark_points; } pose;
@property (nonatomic) int detectionError;
@property (retain, nonatomic) NSDictionary *leftEarYawAngleCapturedPoses;
@property (retain, nonatomic) NSDictionary *leftEarRollAngleCapturedPoses;
@property (retain, nonatomic) NSDictionary *rightEarYawAngleCapturedPoses;
@property (retain, nonatomic) NSDictionary *rightEarRollAngleCapturedPoses;
@property (readonly, nonatomic) NSDictionary *leftEarYawAngleCaptured;
@property (readonly, nonatomic) NSDictionary *leftEarRollAngleCaptured;
@property (readonly, nonatomic) NSDictionary *rightEarYawAngleCaptured;
@property (readonly, nonatomic) NSDictionary *rightEarRollAngleCaptured;

+ (id)capturedStatesFromCapturedPoses:(id)a0;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;

@end
