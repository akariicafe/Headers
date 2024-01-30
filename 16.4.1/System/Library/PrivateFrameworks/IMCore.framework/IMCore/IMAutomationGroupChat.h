@interface IMAutomationGroupChat : IMCoreAutomationHook

- (id)_runChangeParticipantsQueryWithGroupID:(id)a0 participants:(id)a1 timeOut:(double)a2 error:(id *)a3 optArguments:(id)a4 addParticipants:(BOOL)a5;
- (id)addParticipantsWithGroupID:(id)a0 participants:(id)a1 timeOut:(double)a2 error:(id *)a3 optArguments:(id)a4;
- (id)changeGroupNameWithGroupID:(id)a0 newName:(id)a1 timeOut:(double)a2 error:(id *)a3 optArguments:(id)a4;
- (id)createGroupChatWithDestinationIDs:(id)a0 error:(id *)a1 optArguments:(id)a2;
- (id)groupNameWithGroupID:(id)a0 timeOut:(double)a1 error:(id *)a2 optArguments:(id)a3;
- (id)groupParticipantsWithGroupID:(id)a0 timeOut:(double)a1 error:(id *)a2 optArguments:(id)a3;
- (id)removeParticipantsWithGroupID:(id)a0 participants:(id)a1 timeOut:(double)a2 error:(id *)a3 optArguments:(id)a4;

@end
