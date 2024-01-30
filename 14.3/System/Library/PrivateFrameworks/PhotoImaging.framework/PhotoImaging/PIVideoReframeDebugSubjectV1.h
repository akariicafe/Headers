@interface PIVideoReframeDebugSubjectV1 : PIVideoReframeDebugSubject

@property double frameDominance;
@property double cameraCorrelation;
@property BOOL usedInReframing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
