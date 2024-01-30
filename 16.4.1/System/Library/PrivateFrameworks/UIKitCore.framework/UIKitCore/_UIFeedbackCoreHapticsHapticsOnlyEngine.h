@interface _UIFeedbackCoreHapticsHapticsOnlyEngine : _UIFeedbackCoreHapticsEngine

+ (id)sharedEngine;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;

- (id)_internal_createCoreHapticsEngine;

@end
