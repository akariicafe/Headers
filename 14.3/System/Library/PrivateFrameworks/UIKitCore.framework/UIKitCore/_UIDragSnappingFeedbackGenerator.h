@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (readonly, nonatomic, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)objectSnapped;
- (void)userInteractionEnded;
- (void)_stopLanding;
- (void)draggedObjectLifted;
- (void)_startLanding;
- (void)draggedObjectLanded;

@end
