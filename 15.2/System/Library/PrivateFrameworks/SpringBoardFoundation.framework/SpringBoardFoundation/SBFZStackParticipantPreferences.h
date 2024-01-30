@class NSIndexSet, NSString;

@interface SBFZStackParticipantPreferences : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) long long activationPolicyForParticipantsBelow;
@property (copy, nonatomic) NSIndexSet *assertIsAboveParticipantIdentifiers;
@property (nonatomic) long long homeGestureConsumption;
@property (nonatomic) long long homeAffordanceDrawingSuppression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initInternal;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
