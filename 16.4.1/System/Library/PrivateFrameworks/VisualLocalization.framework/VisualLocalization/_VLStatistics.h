@interface _VLStatistics : NSObject <NSSecureCoding> {
    struct { double *points3d; float *points2d; int *inlier_indices; double slam_origin[6]; float *slam_trks; char *slam_trks_desc; short *slam_trks_obs; float *slam_trks_2d; short *slam_trks_img_idx; int *vio_status; float *vio_poses; float *K; float *distortion; float *solver_conf; float *fused_conf; float gravity[3]; int num_keypoints; int num_tracks; int num_matches; int num_inliers; int num_inliers_gt; int num_solutions; int status_ps; int num_slam_tracks; int num_frame; int desc_dim; double t_kpts; double t_kpts_pyr; double t_kpts_det; double t_kpts_model; double t_kpts_desc; double t_load; double t_index; double t_pca; double t_match; double t_match_sss; double t_match_filter; double t_pose; double t_pose_score_filter; double t_pose_score_vote; double t_pose_score_find_peak; double t_pose_score_refine; double t_pose_score_other; double t_pose_score; double t_pose_ransac; double t_pose_referee; double t_pose_fuse; double t_total; struct { int level; int x; int y; int uncertainty; } tile; long long tracks_file_size; int peak_mem_usage; } _stats;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { double *x0; float *x1; int *x2; double x3[6]; float *x4; char *x5; short *x6; float *x7; short *x8; int *x9; float *x10; float *x11; float *x12; float *x13; float *x14; float x15[3]; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; struct { int x0; int x1; int x2; int x3; } x48; long long x49; int x50; } *stats;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStats:(const struct { double *x0; float *x1; int *x2; double x3[6]; float *x4; char *x5; short *x6; float *x7; short *x8; int *x9; float *x10; float *x11; float *x12; float *x13; float *x14; float x15[3]; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; struct { int x0; int x1; int x2; int x3; } x48; long long x49; int x50; } *)a0;
- (void)dealloc;

@end
