@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _NUVisionDetectionResult : _NURenderResult <NUVisionDetectionResult>

@property (copy, nonatomic) NSArray *observations;
@property struct { long long width; long long height; } imageSize;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
