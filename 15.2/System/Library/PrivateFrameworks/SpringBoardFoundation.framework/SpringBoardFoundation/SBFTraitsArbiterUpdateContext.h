@class NSString, NSArray, SBFTraitsSettingsActuationContext;

@interface SBFTraitsArbiterUpdateContext : NSObject <SBFTraitsArbiterUpdateContextBuilding, BSDescriptionProviding, SBFTraitsSettingsActuationContextProviding>

@property (readonly, nonatomic) BOOL _hasDefaultOrientationActuationContext;
@property (readonly, copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *requestingParticipantsUniqueIdentifiers;
@property (nonatomic) BOOL forceOrientationResolution;
@property (copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)hasAnyActuationContext;
- (id)initWithBuilder:(id /* block */)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (void)setReason:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
