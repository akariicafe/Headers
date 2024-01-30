@class ARWorldTrackingPoseData;

@interface AR3DSkeletonRegistrationTechnique : ARTechnique {
    BOOL _is_tracking;
    int _last_btr_poses_idx;
    float _estimatedScale;
    double _last_detection_timestamp;
    struct array<float, 2> { float __elems_[2]; } _depth_scaler_num_den;
    unsigned long long _depth_scaler_observation_count;
    struct shared_ptr<arkit::btr::ScaleCorrection> { struct ScaleCorrection *__ptr_; struct __shared_weak_count *__cntrl_; } _scaler;
    struct shared_ptr<arkit::btr::BodyRegistration> { struct BodyRegistration *__ptr_; struct __shared_weak_count *__cntrl_; } _btr;
    struct array<arkit::btr::RegistrationData, 5> { struct RegistrationData { struct Matrix<float, 2, 16, false> { float m_data[32]; } image_points; struct Matrix<float, 3, 16, false> { float m_data[48]; } lifted_points; struct Matrix<float, 3, 3, false> { float m_data[9]; } intrinsics; struct SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> { float m_data[16]; } cam_from_obj; struct SE3GroupStorage<float, cva::Matrix<float, 4, 4, false>> { float m_data[16]; } cam_from_vio; double timestamp_obj; double timestamp_vio; } __elems_[5]; } _last_btr_poses;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _dumps_dir;
    struct basic_ofstream<char, std::char_traits<char>> { void /* function */ **_vptr$basic_ostream; struct basic_filebuf<char, std::char_traits<char>> { void /* function */ **_vptr$basic_streambuf; struct locale { struct __imp *__locale_; } __loc_; char *__binp_; char *__ninp_; char *__einp_; char *__bout_; char *__nout_; char *__eout_; char *__extbuf_; char *__extbufnext_; char *__extbufend_; char __extbuf_min_[8]; unsigned long long __ebs_; char *__intbuf_; unsigned long long __ibs_; struct __sFILE *__file_; void *__cv_; union { char __mbstate8[128]; long long _mbstateL; } __st_; union { char __mbstate8[128]; long long _mbstateL; } __st_last_; unsigned int __om_; unsigned int __cm_; BOOL __owns_eb_; BOOL __owns_ib_; BOOL __always_noconv_; } __sb_; void /* function */ **_vptr$ios_base; unsigned int __fmtflags_; long long __precision_; long long __width_; unsigned int __rdstate_; unsigned int __exceptions_; void *__rdbuf_; void *__loc_; void /* function */ **__fn_; int *__index_; unsigned long long __event_size_; unsigned long long __event_cap_; long long *__iarray_; unsigned long long __iarray_size_; unsigned long long __iarray_cap_; void **__parray_; unsigned long long __parray_size_; unsigned long long __parray_cap_; void *__tie_; int __fill_; } _btrf;
    struct basic_ofstream<char, std::char_traits<char>> { void /* function */ **_vptr$basic_ostream; struct basic_filebuf<char, std::char_traits<char>> { void /* function */ **_vptr$basic_streambuf; struct locale { struct __imp *__locale_; } __loc_; char *__binp_; char *__ninp_; char *__einp_; char *__bout_; char *__nout_; char *__eout_; char *__extbuf_; char *__extbufnext_; char *__extbufend_; char __extbuf_min_[8]; unsigned long long __ebs_; char *__intbuf_; unsigned long long __ibs_; struct __sFILE *__file_; void *__cv_; union { char __mbstate8[128]; long long _mbstateL; } __st_; union { char __mbstate8[128]; long long _mbstateL; } __st_last_; unsigned int __om_; unsigned int __cm_; BOOL __owns_eb_; BOOL __owns_ib_; BOOL __always_noconv_; } __sb_; void /* function */ **_vptr$ios_base; unsigned int __fmtflags_; long long __precision_; long long __width_; unsigned int __rdstate_; unsigned int __exceptions_; void *__rdbuf_; void *__loc_; void /* function */ **__fn_; int *__index_; unsigned long long __event_size_; unsigned long long __event_cap_; long long *__iarray_; unsigned long long __iarray_size_; unsigned long long __iarray_cap_; void **__parray_; unsigned long long __parray_size_; unsigned long long __parray_cap_; void *__tie_; int __fill_; } _btrts;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
}

@property (nonatomic) BOOL automaticSkeletonScaleEstimationEnabled;

- (void)resetState;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (id)processResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (BOOL)_estimateCameraPoseFromMatchingImageData:(id)a0 to3DData:(id)a1 worldTrackingPose:(id)a2 pCameraFromBody:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a3 depthData:(id)a4 pScaleOut:(float *)a5;
- (float)_estimateScaleFromDepthData:(id)a0 imageData:(id)a1 cameraPoseFromBody:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 skeleton:(id)a3;
- (float)_estimateScaleFromJasperCloud:(id)a0 cameraPoseFromBody:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 skeleton:(id)a2;

@end
