@class NSString, PKAccountSupportTopicExplanation;

@interface PKAccountSupportTopic : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *bodyText;
@property (readonly, copy, nonatomic) NSString *businessChatTargetDialog;
@property (readonly, copy, nonatomic) NSString *businessChatPage;
@property (readonly, nonatomic) unsigned long long issueType;
@property (readonly, nonatomic) PKAccountSupportTopicExplanation *explanation;

- (BOOL)supportsBusinessChat;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithNonCancellableBillPayment;
- (id)initWithOtherTopicForAccount:(id)a0;

@end
