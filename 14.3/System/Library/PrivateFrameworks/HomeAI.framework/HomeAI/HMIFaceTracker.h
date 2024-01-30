@class NSArray, NSMutableArray, NSString;

@interface HMIFaceTracker : HMFObject <HMFLogging>

@property (retain) NSArray *previousPersons;
@property (retain) NSArray *previousProjectedPersonIndices;
@property (retain) NSArray *previousFilteredPersonIndices;
@property (readonly) NSMutableArray *motionRecordsQueue;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } previousTime;
@property (readonly) struct CGSize { double width; double height; } frameDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithFrameDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)handleMotionDetections:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)trackNewFaces:(id)a0 personWithoutFaceEvents:(id)a1 personWithFilteredFaceEvents:(id)a2 withMotionDetection:(id)a3 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)getUUIDToNextFaceIndexWithPreviousFaceindex:(id)a0;

@end
