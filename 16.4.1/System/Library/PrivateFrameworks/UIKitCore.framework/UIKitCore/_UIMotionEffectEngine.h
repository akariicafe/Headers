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

+ (Class)_eventProviderClass;
+ (BOOL)_motionEffectsEnabled;
+ (Class)_analyzerClass;
+ (BOOL)_motionEffectsSupported;

- (void)updateWithEvent:(id)a0;
- (void)beginSuspendingMotionEffectsForView:(id)a0;
- (void)endSuspendingForReason:(id)a0;
- (BOOL)_isSuspended;
- (void)_updateDisplayLinkInterval;
- (void)_unapplyAllEffects;
- (void)updateEventProviderStatus:(long long)a0;
- (BOOL)_motionEffect:(id)a0 belongsToView:(id)a1;
- (void)_unregisterMotionEffect:(id)a0 fromView:(id)a1;
- (void)endApplyingMotionEffect:(id)a0 toView:(id)a1;
- (id)_motionEffectsForView:(id)a0;
- (void)_unregisterAllMotionEffectsForView:(id)a0;
- (void)_stopGeneratingUpdates;
- (void)endSuspendingMotionEffectsForView:(id)a0;
- (void)dealloc;
- (void)_startOrStopGeneratingUpdates;
- (BOOL)_shouldGenerateUpdates;
- (void)_handleLatestDeviceMotion;
- (BOOL)_motionEffectsAreSuspendedForView:(id)a0;
- (id)init;
- (void)_applyEffectsFromAnalyzer:(id)a0;
- (void)beginApplyingMotionEffect:(id)a0 toView:(id)a1;
- (void)_toggleSlowUpdates;
- (void)beginSuspendingForReason:(id)a0;
- (void)_startGeneratingUpdates;
- (void)resetMotionAnalysis;
- (void).cxx_destruct;
- (BOOL)_hasMotionEffectsForView:(id)a0;

@end
