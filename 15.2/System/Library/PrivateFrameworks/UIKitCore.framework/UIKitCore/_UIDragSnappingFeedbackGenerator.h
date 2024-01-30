@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (readonly, nonatomic, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)_startLanding;
- (void)objectSnapped;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void)_stopLanding;

@end
