@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (readonly, nonatomic, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionEnded;
- (void)userInteractionStarted;
- (void)objectSnapped;
- (void)draggedObjectLifted;
- (void)_startLanding;
- (void)draggedObjectLanded;
- (void)_stopLanding;

@end
