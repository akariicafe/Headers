@class NSData, NSUUID, GEOVLFLocation;

@interface VLLocalizationDebugInfo : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
    double _monotonicTimestamp;
    double _duration;
    BOOL _hasStatistics;
    struct { double *points3d; float *points2d; int *inlier_indices; float *solver_conf; float *fused_conf; float gravity[3]; int num_keypoints; int num_tracks; int num_matches; int num_inliers; int num_inliers_gt; int num_solutions; int status_ps; double t_kpts; double t_kpts_pyr; double t_kpts_det; double t_kpts_model; double t_kpts_desc; double t_load; double t_index; double t_pca; double t_match; double t_match_sss; double t_match_filter; double t_pose; double t_pose_score_filter; double t_pose_score_vote; double t_pose_score_find_peak; double t_pose_score_refine; double t_pose_score_other; double t_pose_score; double t_pose_ransac; double t_pose_referee; double t_pose_fuse; double t_total; struct { int level; int x; int y; int uncertainty; } tile; long long tracks_file_size; int peak_mem_usage; } _statistics;
    BOOL _hasResultPose;
    struct { void /* unknown type, empty encoding */ columns[4]; } _resultTransform;
    struct { void /* unknown type, empty encoding */ coordinate; double horizontalAccuracy; } _resultLocation;
    float _resultConfidence;
    struct { float v[6][6]; } _resultCovariance;
    GEOVLFLocation *_analyticsLocation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_timestamp) double timestamp;
@property (readonly, nonatomic, getter=_location) struct { double pos_geoc[3]; float horz_accuracy; int is_vl_fused; int type; } location;
@property (readonly, nonatomic, getter=_heading) struct { double trueHeading; double accuracy; } heading;
@property (readonly, nonatomic, getter=_gravity) void /* unknown type, empty encoding */ gravity;
@property (readonly, nonatomic, getter=_transform) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic, getter=_cameraIntrinsics) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic, getter=_radialDistortion) void /* unknown type, empty encoding */ radialDistortion;
@property (readonly, nonatomic, getter=_exposureTargetOffset) double exposureTargetOffset;
@property (readonly, nonatomic, getter=_resultStatus) unsigned long long resultStatus;
@property (readonly, nonatomic, getter=_inlierIndices) int *inlierIndices;
@property (readonly, nonatomic, getter=_solutionsCount) unsigned long long solutionsCount;
@property (readonly, nonatomic, getter=_solverConfidences) float *solverConfidences;
@property (readonly, nonatomic, getter=_fusedConfidences) float *fusedConfidences;
@property (readonly, nonatomic) unsigned long long inliersCount;
@property (readonly, nonatomic) float *points2D;
@property (readonly, nonatomic) double *points3D;
@property (readonly, nonatomic) NSData *pngData;

- (id)results;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)inputParameters;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_fixupStatsPointers;
- (id)initWithPixelBuffer:(id)a0 monotonicTimestamp:(SEL)a1 timestamp:(struct __CVBuffer { } *)a2 duration:(double)a3 location:(double)a4 clLocation:(double)a5 heading:(struct { double x0[3]; float x1; int x2; int x3; })a6 gravity:(id)a7 transform:(struct { double x0; double x1; })a8 cameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a9 radialDistortion:(struct { void /* unknown type, empty encoding */ x0[3]; })a10 exposureTargetOffset:(double)a11 statistics:(const struct { double *x0; float *x1; int *x2; float *x3; float *x4; float x5[3]; int x6; int x7; int x8; int x9; int x10; int x11; int x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; struct { int x0; int x1; int x2; int x3; } x35; long long x36; int x37; } *)a12 resultStatus:(unsigned long long)a13 resultPose:(const struct { double x0[3][3]; double x1[3]; float x2; float x3[36]; } *)a14 preserveImageData:(BOOL)a15;
- (id)analyticsInformationWithSessionStartMonotonicTime:(double)a0;

@end
