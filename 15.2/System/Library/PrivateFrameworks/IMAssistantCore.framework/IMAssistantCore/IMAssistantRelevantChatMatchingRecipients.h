@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject

@property (retain, nonatomic) IMChat *chat;
@property (copy, nonatomic) NSArray *resolvedPersons;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChat:(id)a0 resolvedPersons:(id)a1;

@end
