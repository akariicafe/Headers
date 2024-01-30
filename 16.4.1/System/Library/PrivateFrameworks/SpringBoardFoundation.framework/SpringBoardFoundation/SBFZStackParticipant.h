@class NSSet, SBFZStackResolver, SBFZStackParticipantPreferences, NSString;
@protocol SBFZStackParticipantDelegate;

@interface SBFZStackParticipant : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) long long activationState;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) BOOL homeAffordanceDrawingSuppressed;
@property (nonatomic) BOOL systemApertureSuppressedForSystemChromeSuppression;
@property (copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture;
@property (copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture;
@property (weak, nonatomic) SBFZStackResolver *resolver;
@property (copy, nonatomic) SBFZStackParticipantPreferences *preferences;
@property (readonly, nonatomic) long long identifier;
@property (readonly, weak, nonatomic) id<SBFZStackParticipantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_updatePreferences;
- (id)initWithIdentifier:(long long)a0 delegate:(id)a1;
- (void)setNeedsUpdatePreferencesWithReason:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
