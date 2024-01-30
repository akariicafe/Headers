@class NSString, NSArray;

@interface IMSPIChat : NSObject

@property (retain) NSString *guid;
@property (retain) NSString *chatIdentifier;
@property (retain) NSString *serviceName;
@property (retain) NSString *displayName;
@property BOOL isGroup;
@property (retain) NSArray *handles;
@property (readonly) BOOL isBlackholed;

+ (void)enumerateAllChatsWithBlock:(id /* block */)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct { } *)a0;
- (void)enumerateAllAttachmentsWithBlock:(id /* block */)a0;
- (void)enumerateAllMessagesWithBlock:(id /* block */)a0;

@end
