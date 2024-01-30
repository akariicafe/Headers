@class PHASEEngine;

@interface PHASETransmissionModelerView : NSObject

@property (weak, nonatomic) PHASEEngine *engine;

- (id)initWithEngine:(id)a0;
- (void).cxx_destruct;
- (void)beginTrackingSource:(id)a0 callback:(id /* block */)a1;
- (void)endTrackingSource:(id)a0;
- (void)beginTrackingAudibleGeometryForSource:(id)a0 callback:(id /* block */)a1;
- (void)endTrackingAudibleGeometryForSource:(id)a0;
- (void)overrideMaximumSampleCountForSource:(id)a0 count:(long long)a1;
- (void)overrideSampleHistoryLengthForSource:(id)a0 length:(long long)a1;
- (void)overrideSampleSubdivisionIndexForSource:(id)a0 index:(long long)a1;
- (void)overrideGeometrySubdivisionForSource:(id)a0 subdivideGeometry:(BOOL)a1;

@end
