@class NSMutableArray;

@interface IMDCarAutoReplierChatProperties : NSObject {
    NSMutableArray *_suppressedMessageIDs;
}

@property (nonatomic) BOOL autoReplySent;
@property (nonatomic, getter=isUrgent) BOOL urgent;

- (id)init;
- (void)dealloc;
- (void)addSuppressedMessage:(id)a0;
- (id)popSuppressedMessages;

@end
