@class NSString, NSArray, CADisplayLink, _UIMotionEffectEventProvider, _UILazyMapTable, NSMutableSet, _UIMotionEffectEvent, _UIAssociationTable, NSMapTable;

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    BOOL _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingEventLock;
    CADisplayLink *_displayLink;
    BOOL _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    long long _eventProviderStatus;
    BOOL _allAnalyzersAreCentered;
    BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL _isPendingReset;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
}

@property (nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation;
@property (readonly, nonatomic) NSArray *suspensionReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_analyzerClass;
+ (BOOL)_motionEffectsEnabled;
+ (Class)_eventProviderClass;
+ (BOOL)_motionEffectsSupported;

- (BOOL)_shouldGenerateUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_toggleSlowUpdates;
- (void)_unregisterMotionEffect:(id)a0 fromView:(id)a1;
- (id)_motionEffectsForView:(id)a0;
- (void)endSuspendingMotionEffectsForView:(id)a0;
- (void)updateEventProviderStatus:(long long)a0;
- (void)_unapplyAllEffects;
- (void)_handleLatestDeviceMotion;
- (void)endSuspendingForReason:(id)a0;
- (void)_updateDisplayLinkInterval;
- (void)_applyEffectsFromAnalyzer:(id)a0;
- (BOOL)_motionEffectsAreSuspendedForView:(id)a0;
- (void)_startGeneratingUpdates;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_motionEffect:(id)a0 belongsToView:(id)a1;
- (void)beginSuspendingForReason:(id)a0;
- (void)endApplyingMotionEffect:(id)a0 toView:(id)a1;
- (void)resetMotionAnalysis;
- (void)beginSuspendingMotionEffectsForView:(id)a0;
- (void)dealloc;
- (BOOL)_isSuspended;
- (void)_unregisterAllMotionEffectsForView:(id)a0;
- (void)_stopGeneratingUpdates;
- (void)beginApplyingMotionEffect:(id)a0 toView:(id)a1;
- (BOOL)_hasMotionEffectsForView:(id)a0;
- (void)updateWithEvent:(id)a0;

@end
