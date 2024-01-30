@class IMDMessageStore, IMDAccount;

@interface IMTextMessageProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
}

- (void).cxx_destruct;
- (unsigned long long)computeFlagsForInput:(id)a0;
- (id)createMessageItemWithInput:(id)a0;
- (id)initWithAccount:(id)a0 messageStore:(id)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end
