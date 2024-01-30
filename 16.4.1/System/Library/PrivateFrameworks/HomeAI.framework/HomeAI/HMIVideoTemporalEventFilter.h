@class NSString, NSDictionary, HMIVideoAnalyzerFrameResult, NSMutableArray;

@interface HMIVideoTemporalEventFilter : HMFObject <HMFLogging>

@property (retain) HMIVideoAnalyzerFrameResult *prevFrameResult;
@property (readonly) NSMutableArray *stationaryObjects;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeInterval;
@property (readonly) NSDictionary *targetEventClassRanks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)_filterEvents:(id)a0 stationaryEvents:(id)a1 motionDetection:(id)a2;
- (id)_filterEvents:(id)a0 stationaryEvents:(id)a1 motionDetection:(id)a2 prevFrameResult:(id)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)_filterEvents:(id)a0 stationaryEvents:(id)a1 stationaryObjects:(id)a2 expirationPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 imageSize:(struct CGSize { double x0; double x1; })a4;
- (BOOL)_resetPreviousFrameResult:(id)a0 expirationPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)applyFilterWithFrameResult:(id)a0 motionDetection:(id)a1;

@end
