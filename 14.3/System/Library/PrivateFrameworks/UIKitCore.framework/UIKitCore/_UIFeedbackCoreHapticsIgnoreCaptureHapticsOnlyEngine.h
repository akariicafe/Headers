@interface _UIFeedbackCoreHapticsIgnoreCaptureHapticsOnlyEngine : _UIFeedbackCoreHapticsEngine

+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (id)sharedEngine;

- (id)_internal_createCoreHapticsEngine;

@end
