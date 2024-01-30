@class NSString, NSArray, NSNumber, IMDChat;

@interface IMChatSessionClosePipelineParameter : NSObject <IMChatSessionCloseProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *conversationID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0;

@end
