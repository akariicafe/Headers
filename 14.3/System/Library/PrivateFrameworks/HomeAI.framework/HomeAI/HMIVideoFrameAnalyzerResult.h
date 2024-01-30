@class NSSet, HMIVideoFrame, NSString;

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent>

@property (readonly) HMIVideoFrame *frame;
@property (readonly) NSSet *events;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
