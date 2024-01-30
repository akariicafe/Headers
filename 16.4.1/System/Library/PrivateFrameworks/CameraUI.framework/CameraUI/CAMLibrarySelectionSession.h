@class NSDate;
@protocol CAMLibrarySelectionDelegate;

@interface CAMLibrarySelectionSession : NSObject

@property (retain, nonatomic) NSDate *launchDate;
@property (weak, nonatomic) id<CAMLibrarySelectionDelegate> delegate;
@property (readonly, nonatomic) long long initialMode;
@property (readonly, nonatomic) long long currentMode;
@property (readonly, nonatomic) long long userInteractionsCount;
@property (readonly, nonatomic) BOOL restoredFromPreferences;
@property (readonly, nonatomic) BOOL canResetToDefaultMode;
@property (readonly, nonatomic) BOOL overriddenByUser;
@property (readonly, nonatomic) BOOL userWasPreviouslyOnTrip;
@property (readonly, nonatomic) double timeToDetectDevicesInProximity;
@property (readonly, nonatomic) double timeToAcquireFirstLocation;
@property (readonly, nonatomic) double timeToAcquireFirstPreciseLocation;
@property (readonly, nonatomic) double timeForSmartSharingAutoDecision;
@property (readonly, nonatomic) double timeForUserManualOverride;

- (long long)_autoResetMode;
- (BOOL)updateWithResult:(id)a0;
- (BOOL)notifyResetIfNeeded;
- (BOOL)_userWasPreviouslyOnTrip;
- (BOOL)_canTransitionToAutoOn;
- (long long)_defaultMode;
- (BOOL)updateWithMode:(long long)a0;
- (BOOL)_canResetDuringSessionWithResult:(id)a0;
- (id)initWithMode:(long long)a0;
- (BOOL)_applyAutoResetModeAndNotify:(BOOL)a0;
- (BOOL)_shouldResetDuringSessionWithResult:(id)a0;
- (BOOL)_shouldResetSessionBasedOnTimeoutDuringTrip:(BOOL)a0 atSameLocation:(BOOL)a1;
- (void).cxx_destruct;

@end
