@class NSSet, NSArray, NSString, HMIVideoFrame;

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent>

@property (readonly) HMIVideoFrame *frame;
@property (readonly) NSSet *events;
@property (readonly) NSSet *backgroundEvents;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } backgroundTimeStamp;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (readonly) NSArray *motionDetections;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
