@interface _CLVLLocalizationMaps488Details : NSObject <NSCopying, NSSecureCoding> {
    double _slamOrigin[6];
    double _resultPoseRotation[3][3];
    double _resultPoseTranslation[3];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long inliersCount;
@property (readonly, nonatomic) float *points2D;
@property (readonly, nonatomic) double *points3D;
@property (readonly, nonatomic) int *inlierIndices;
@property (readonly, nonatomic) double *slamOrigin;
@property (readonly, nonatomic) unsigned long long slamTracksCount;
@property (readonly, nonatomic) float *slamTracks;
@property (readonly, nonatomic) unsigned long long descriptorDimension;
@property (readonly, nonatomic) char *slamTrackDescriptors;
@property (readonly, nonatomic) short *slamTrackObservations;
@property (readonly, nonatomic) unsigned long long totalObservationsCount;
@property (readonly, nonatomic) float *slamTracks2D;
@property (readonly, nonatomic) short *slamTrackImageIndices;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) int *perFrameVioStatusCodes;
@property (readonly, nonatomic) float *perFrameVioPoses;
@property (readonly, nonatomic) float *perFrameCalibrationMatrices;
@property (readonly, nonatomic) float *perFrameDistortion;
@property (readonly, nonatomic) double *resultPoseRotation;
@property (readonly, nonatomic) double *resultPoseTranslation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)resetSlamTracks;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (void)resetFrames;
- (void)resetInliers;
- (BOOL)setFrameCount:(unsigned long long)a0 perFrameVioStatusCodes:(const int *)a1 perFrameVioPoses:(const float *)a2 perFrameCalibrationMatrices:(const float *)a3 perFrameDistortion:(const float *)a4;
- (BOOL)setInliersCount:(unsigned long long)a0 points2D:(const float *)a1 points3D:(const double *)a2 inlierIndices:(const int *)a3;
- (void)setResultPoseRotation:(const double *)a0;
- (void)setResultPoseTranslation:(const double *)a0;
- (void)setSlamOrigin:(const double *)a0;
- (BOOL)setSlamTracksCount:(unsigned long long)a0 slamTracks:(const float *)a1 descriptorDimension:(unsigned long long)a2 slamTrackDescriptors:(const char *)a3 slamTrackObservations:(const short *)a4 slamTracks2D:(const float *)a5 slamTrackImageIndices:(const short *)a6;

@end
