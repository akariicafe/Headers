@class NSArray, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface WatchControlSettings : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSObject<OS_dispatch_queue> *_localObserverQueue;
}

@property (retain, nonatomic) NSArray *actionMenuFavorites;
@property (nonatomic) long long actionMenuPosition;
@property (nonatomic) BOOL actionMenuLargerSize;
@property (nonatomic) long long greyActivationGesture;
@property (readonly, nonatomic) NSArray *eligibleGreyActivationGestures;
@property (nonatomic) BOOL greyQuickActionsEnabled;
@property (nonatomic) BOOL greyQuickActionAutoScrollNotificationsEnabled;
@property (nonatomic) BOOL hasShownInitialOnboarding;
@property (nonatomic) float motionPointerSensitivity;
@property (readonly, nonatomic) float motionPointerSensitivityMin;
@property (readonly, nonatomic) float motionPointerSensitivityMax;
@property (nonatomic) float motionPointerActivationDuration;
@property (readonly, nonatomic) float motionPointerActivationDurationMin;
@property (readonly, nonatomic) float motionPointerActivationDurationMax;
@property (nonatomic) unsigned long long motionPointerMovementTolerance;
@property (nonatomic) BOOL dwellControlEnabled;
@property (nonatomic) BOOL dwellControlShakeToStart;
@property (nonatomic) unsigned long long dwellControlTimerAction;
@property (nonatomic) long long focusRingColor;
@property (nonatomic) BOOL focusRingHighContrastEnabled;
@property (nonatomic) unsigned long long defaultAutoScrollSpeed;
@property (nonatomic) long long focusMovementStyle;
@property (nonatomic) unsigned long long autoFocusNavigationSpeed;
@property (nonatomic) BOOL playDetectedGestureHapticFeedback;
@property (nonatomic) BOOL showGestureRecognizerIndicator;
@property (nonatomic) BOOL showDetectedGestureBanner;
@property (nonatomic) BOOL disablePPGDataSource;
@property (nonatomic) BOOL automationServerEnabled;
@property (nonatomic) BOOL falsePositiveLoggingEnabled;
@property (nonatomic) BOOL automaticDigitalCrownEnablementInWaterLock;
@property (nonatomic) BOOL featureEnabled;

+ (id)sharedInstance;

- (id)accessibilityDomainAccessor;
- (id)_init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)informObservers;
- (void)setAction:(unsigned long long)a0 forMotionPointerEdge:(long long)a1;
- (void)removeCustomActionForGreyEvent:(long long)a0;
- (void)_updateInputSourceType:(unsigned long long)a0 enable:(BOOL)a1;
- (void)addSettingsObserver:(id)a0;
- (void)disableInputSourceType:(unsigned long long)a0;
- (void)enableInputSourceType:(unsigned long long)a0;
- (id)enabledInputSourceTypes;
- (id)greyEventActionCustomizations;
- (id)greyEventCustomActionCustomizations;
- (void)informLocalObservers;
- (id)motionPointerEdgeActionCustomizations;
- (void)removeSettingsObserver:(id)a0;
- (void)resetGreyEventActionCustomizations;
- (void)resetMotionPointerEdgeActionCustomizations;
- (void)setAction:(unsigned long long)a0 forGreyEvent:(long long)a1;
- (void)setCustomActionType:(long long)a0 withCustomActionIdentifier:(id)a1 forGreyEvent:(long long)a2;
- (id)watchControlDomainAccessor;

@end
