@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _PIVideoReframeResult : _NURenderResult <PIVideoReframeResult>

@property (readonly, copy, nonatomic) NSArray *keyframes;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (readonly, nonatomic) double confidence;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKeyframes:(id)a0 confidence:(double)a1 stabCropRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2;

@end
