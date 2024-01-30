@class NSString;

@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling>

@property (readonly, nonatomic) unsigned long long faceOcclusionsSinceScreenOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
