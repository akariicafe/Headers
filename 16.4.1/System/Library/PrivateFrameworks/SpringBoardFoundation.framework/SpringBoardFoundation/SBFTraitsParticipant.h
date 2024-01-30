@class SBFTraitsPreferencesZOrderLevel, NSString, SBFTraitsPreferencesOrientation, SBFTraitsSettingsActuationContext, SBFTraitsArbiter, SBFTraitsSettings, SBFTraitsOrientationResolutionPolicyInfo;
@protocol SBFTraitsParticipantDelegate, BSInvalidatable;

@interface SBFTraitsParticipant : NSObject <SBFTraitsPreferencesUpdating, SBFTraitsSettingsUpdating, SBFTraitsSettingsActuationContextProviding, SBFTraitsPreferencesProviding, SBFTraitsResolutionPoliciesProviding, NSCopying, BSInvalidatable, BSDescriptionProviding, SBFTraitsSettingsProviding> {
    BOOL _invalidated;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (weak, nonatomic) id<SBFTraitsParticipantDelegate> delegate;
@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (retain, nonatomic) SBFTraitsPreferencesZOrderLevel *zOrderLevelPreferences;
@property (retain, nonatomic) SBFTraitsPreferencesOrientation *orientationPreferences;
@property (retain, nonatomic) SBFTraitsSettings *currentSettings;
@property (retain, nonatomic) SBFTraitsSettings *previousSettings;
@property (nonatomic) BOOL _debugDelegateDidValidateLastSettings;
@property (copy, nonatomic) NSString *_debugLastOrientationValidationFailureReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property (copy, nonatomic) SBFTraitsOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo;

- (double)previousZOrderLevel;
- (long long)previousDeviceOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)updateZOrderLevelPreferencesWithBlock:(id /* block */)a0;
- (double)currentZOrderLevel;
- (void)updateZOrderLevelSettingsWithBlock:(id /* block */)a0;
- (long long)currentDeviceOrientation;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 force:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updatePreferencesIfNeeded;
- (void)updateOrientationPreferencesWithBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)hasAnyActuationContext;
- (id)_setupStateDump;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 force:(BOOL)a1 animate:(BOOL)a2;
- (long long)currentOrientation;
- (id)initWithRole:(id)a0 uniqueIdentifier:(id)a1 delegate:(id)a2 arbiter:(id)a3;
- (long long)previousOrientation;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void)updateOrientationSettingsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0 animate:(BOOL)a1;

@end
