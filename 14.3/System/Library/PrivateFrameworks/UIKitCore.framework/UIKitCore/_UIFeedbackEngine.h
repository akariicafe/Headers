@class NSString, NSMapTable, NSMutableDictionary, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface _UIFeedbackEngine : NSObject {
    NSMutableDictionary *_completionBlocks;
    NSTimer *_suspensionTimer;
    BOOL _suspended;
}

@property (class, readonly, nonatomic, getter=_internalQueue) NSObject<OS_dispatch_queue> *internalQueue;

@property (nonatomic) long long prewarmCount;
@property (nonatomic, getter=isEnabled, setter=_setEnabled:) BOOL enabled;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (readonly, nonatomic) unsigned long long numberOfClients;
@property (retain, nonatomic, getter=_playerDequeueBlocks, setter=_setPlayerDequeueBlocks:) NSMapTable *playerDequeueBlocks;
@property (nonatomic, getter=_backgroundTaskIdentifier, setter=_setBackgroundTaskIdentifier:) unsigned long long backgroundTaskIdentifier;
@property (readonly, nonatomic, getter=_suspensionState) long long suspensionState;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) NSString *_stats_key;

+ (BOOL)_supportsPlayingFeedback:(id)a0;
+ (id)engineForFeedback:(id)a0;
+ (BOOL)_supportsPlayingIndividualFeedback:(id)a0;
+ (id)sharedEngine;
+ (BOOL)_supportsPlayingFeedbackPatternsDirectly;
+ (BOOL)_supportsAbortingDeactivation;

- (void)_deactivate;
- (void)_applicationWillResignActive:(id)a0;
- (void)_internal_playFeedbackData:(id)a0 atTime:(double)a1 feedback:(id)a2 effectiveFeedbackType:(unsigned long long)a3 existingPlayer:(id)a4 withCompletionBlock:(id /* block */)a5;
- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)a0;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(id /* block */)a0;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)a0;
- (void)_setSuspended:(BOOL)a0;
- (void)_applicationDidResume:(id)a0;
- (void)_internal_willPlayFeedback:(id)a0 atTime:(double)a1;
- (void)_internal_willCancelFeedback:(id)a0;
- (void)_hostWillEnterForeground:(id)a0;
- (void)_removeViewControllerWillDisconnect:(id)a0;
- (BOOL)_internal_isSuspended;
- (void)_internal_setSuspended:(BOOL)a0;
- (void)_internal_deactivateEngineIfPossible;
- (void)_internal_cooldown;
- (void)_internal_cooldownEngineIfPossible;
- (void)_internal_deactivate;
- (void)_internal_setupBackgroundTask;
- (void)_internal_prewarmEngine;
- (void)_internal_activateEngine;
- (void)_internal_activate:(BOOL)a0 andPerformWhenRunning:(id /* block */)a1;
- (void)_internal_serviceBlocksForState:(long long)a0 withSuccess:(BOOL)a1;
- (void)_internal_prewarm:(BOOL)a0 andPerformWhenPrewarmed:(id /* block */)a1;
- (void)runWhenReady:(id /* block */)a0;
- (void)_suspendEngineNow;
- (void)_internal_startWarmingFeedbacks:(id)a0;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)a0;
- (void)_cooldown;
- (id)description;
- (void)_internal_updateSuspension;
- (void)_prewarm:(BOOL)a0 andPerformWhenPrewarmed:(id /* block */)a1;
- (void)_activate:(BOOL)a0 andPerformWhenRunning:(id /* block */)a1;
- (void)_startWarmingFeedbacks:(id)a0;
- (void)_stopWarmingFeedbacks:(id)a0;
- (void)_internal_stopWarmingFeedbacks:(id)a0;
- (id)_statsSuffix;
- (void)_stats_outOfChannels;
- (id)_activationCountStatistics;
- (id)_prewarmDurationStatistics;
- (void)_applicationWillSuspend:(id)a0;
- (id)_prewarmCountStatistics;
- (id)_activationDurationStatistics;
- (id)_outOfChannelsCountStatistics;
- (void)_stats_stateDidChangeFrom:(long long)a0 to:(long long)a1;
- (void)_playFeedback:(id)a0 atTime:(double)a1 withCompletionBlock:(id /* block */)a2;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)a0;
- (void)_internal_teardownBackgroundTask;
- (void)_internal_performAtState:(long long)a0 block:(id /* block */)a1;
- (void)_hostDidEnterBackground:(id)a0;

@end
