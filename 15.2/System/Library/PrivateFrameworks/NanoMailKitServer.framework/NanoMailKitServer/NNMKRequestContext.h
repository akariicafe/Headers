@class NSArray, NSString, NSDate;

@interface NNMKRequestContext : NSObject

@property (nonatomic) unsigned long long resendInterval;
@property (retain, nonatomic) NSArray *mailboxes;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSDate *beforeDate;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long messagesForSpecialMailbox;
@property (nonatomic) BOOL hasProtectedMessages;

- (void).cxx_destruct;

@end
