@class NSString;

@interface PPLSpotlightFeedbackListener : NSObject <SFFeedbackListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didPerformCommand:(id)a0;

@end
