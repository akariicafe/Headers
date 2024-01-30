@class NSMutableDictionary;

@interface IMDMessageSuppressionController : NSObject {
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
}

@property (nonatomic) double timeToSuppressMessages;

+ (id)sharedInstance;

- (id)messageStore;
- (id)broadcaster;
- (void)handlePlayedReceiptForChatGUID:(id)a0 messageGUID:(id)a1;
- (void)handleIncomingMessageForChatGUID:(id)a0 messageGUID:(id)a1;
- (BOOL)setupTimerForChatGUID:(id)a0;
- (void)handleReadReceiptForChatGUID:(id)a0 messageGUID:(id)a1 IDSService:(id)a2;
- (void)setupTimerForChatGUID:(id)a0 message:(id)a1;
- (BOOL)hasSuppressedMessageID:(id)a0 chatGUID:(id)a1;
- (void)setSuppressedMessageGUID:(id)a0 inChatWithGUID:(id)a1;
- (void)setupTimerForChatGUID:(id)a0 messageGUID:(id)a1;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)a0;
- (BOOL)shouldSuppressMessageForChat:(id)a0 message:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldSuppressMessageForChat:(id)a0 messageGUID:(id)a1;
- (void)_suppressionTimerFired:(id)a0;
- (void)setSuppressedMessage:(id)a0 inChatWithGUID:(id)a1;
- (void)endMessageSuppressionForChatGUID:(id)a0;
- (id)storageController;
- (void)_handleReceiptForChatGUID:(id)a0 messageGUID:(id)a1 unsuppressEarlierMessages:(BOOL)a2 IDSService:(id)a3;
- (void)endMessageSuppression;

@end
