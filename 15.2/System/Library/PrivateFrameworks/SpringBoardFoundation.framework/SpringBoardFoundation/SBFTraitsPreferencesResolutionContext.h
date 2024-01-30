@class NSArray, SBFTraitsArbitrationInputs;

@interface SBFTraitsPreferencesResolutionContext : NSObject

@property (readonly, nonatomic) NSArray *acquiredParticipants;
@property (readonly, nonatomic) NSArray *stageParticipantsRoles;
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *validatedInputs;
@property (readonly, nonatomic) SBFTraitsArbitrationInputs *rawInputs;

- (id)initWithAcquiredParticipants:(id)a0 stageParticipantsRoles:(id)a1 validatedInputs:(id)a2 rawInputs:(id)a3;
- (void).cxx_destruct;

@end
