@class BMAppClipLaunchStream, BMCoreDuetStream, BMContextualActionsStream, BMIntentStream, BMDiscoverabilitySignalStream, BMAppLaunchStream, BMMediaUsageStream;

@interface BMStreams : NSObject

@property (class, readonly) BMAppLaunchStream *appLaunch;
@property (class, readonly) BMAppClipLaunchStream *appClipLaunch;
@property (class, readonly) BMMediaUsageStream *mediaUsage;
@property (class, readonly) BMContextualActionsStream *contextualActions;
@property (class, readonly) BMDiscoverabilitySignalStream *discoverabilitySignal;
@property (class, readonly) BMCoreDuetStream *coreDuetStream;
@property (class, readonly) BMAppLaunchStream *appLaunch;
@property (class, readonly) BMAppClipLaunchStream *appClipLaunch;
@property (class, readonly) BMMediaUsageStream *mediaUsage;
@property (class, readonly) BMIntentStream *intent;

@end
