@class NSIndexSet, SBHomeGestureArbiter, NSString;
@protocol SBHomeGestureParticipantDelegate;

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding>

@property (weak, nonatomic) SBHomeGestureArbiter *arbiter;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) long long resolvedHomeAffordanceSuppression;
@property (nonatomic) long long identifier;
@property (weak, nonatomic) id<SBHomeGestureParticipantDelegate> delegate;
@property (nonatomic) BOOL canShareOwnershipWithNextParticipant;
@property (nonatomic) long long homeAffordanceSuppression;
@property (copy, nonatomic) NSIndexSet *trumpsAdditionalIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)initWithIdentifier:(long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;

@end
