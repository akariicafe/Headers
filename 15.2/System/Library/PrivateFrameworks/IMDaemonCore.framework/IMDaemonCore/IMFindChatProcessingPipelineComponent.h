@class IMDAccount, IMDChatRegistry;

@interface IMFindChatProcessingPipelineComponent : IMPipelineComponent {
    IMDChatRegistry *_chatRegistry;
    IMDAccount *_account;
}

- (void).cxx_destruct;
- (BOOL)__im_ff_chatCacheEnabled;
- (BOOL)_shouldDropMessageGroupID:(id)a0 participants:(id)a1 fromIdentifier:(id)a2 toIdentifier:(id)a3;
- (BOOL)shouldDropDueToGroupSize:(id)a0;
- (BOOL)_participantsContainBizID:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;
- (id)_findGroupChatWithFromIdentifier:(id)a0 toIdentifier:(id)a1 groupName:(id)a2 participants:(id)a3 groupID:(id)a4;
- (id)initWithChatRegistry:(id)a0 account:(id)a1;

@end
