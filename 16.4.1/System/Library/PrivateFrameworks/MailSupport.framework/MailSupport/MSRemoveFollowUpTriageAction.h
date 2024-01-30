@class EMFollowUp;

@interface MSRemoveFollowUpTriageAction : MSTriageAction

@property (retain, nonatomic) EMFollowUp *followUp;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1 followUp:(id)a2;

@end
