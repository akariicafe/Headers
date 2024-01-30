@class NSString, NSArray, NSNumber, IMDChat;

@interface IMRecoverJunkCommandPipelineParameter : NSObject <IMRecoverJunkCommandProcessingParameter, IMMessageFromStorageParameter>

@property (readonly, copy, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL isFromStorage;
@property (readonly, nonatomic) BOOL isLastFromStorage;
@property (copy, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 isFromMe:(BOOL)a1;

@end
