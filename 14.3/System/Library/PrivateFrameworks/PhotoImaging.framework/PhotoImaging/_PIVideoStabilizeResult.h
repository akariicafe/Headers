@class NSArray, NSDictionary, NSString;
@protocol NURenderStatistics;

@interface _PIVideoStabilizeResult : _NURenderResult <PIVideoStabilizeResult>

@property (readonly, copy, nonatomic) NSArray *keyframes;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (readonly, nonatomic) unsigned long long analysisType;
@property (readonly, nonatomic) NSDictionary *rawHomographies;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKeyframes:(id)a0 stabCropRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 analysisType:(unsigned long long)a2 rawHomographies:(id)a3;

@end
