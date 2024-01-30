@class NSString, SBFZStackParticipantPreferences, SBFZStackResolver;
@protocol SBFZStackParticipantDelegate;

@interface SBFZStackParticipant : NSObject <BSDescriptionProviding>

@property (nonatomic) long long activationState;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) BOOL homeAffordanceDrawingSuppressed;
@property (weak, nonatomic) SBFZStackResolver *resolver;
@property (copy, nonatomic) SBFZStackParticipantPreferences *preferences;
@property (readonly, nonatomic) long long identifier;
@property (readonly, weak, nonatomic) id<SBFZStackParticipantDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsUpdatePreferencesWithReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithIdentifier:(long long)a0 delegate:(id)a1;
- (id)succinctDescription;
- (void)_updatePreferences;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;

@end
