@class NSString, VNImageHomographicAlignmentObservation;
@protocol NURenderStatistics;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult>

@property (copy, nonatomic) VNImageHomographicAlignmentObservation *observation;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } extent;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
