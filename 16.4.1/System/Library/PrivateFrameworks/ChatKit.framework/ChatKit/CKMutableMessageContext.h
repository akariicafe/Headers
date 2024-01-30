@class IMChatContext;

@interface CKMutableMessageContext : CKMessageContext

@property (copy, nonatomic) IMChatContext *chatContext;
@property (nonatomic, getter=isFromMe) BOOL fromMe;
@property (nonatomic, getter=isSpam) BOOL spam;
@property (nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (nonatomic, getter=isSenderUnauthenticated) BOOL senderUnauthenticated;
@property (nonatomic, getter=isAudioMessage) BOOL audioMessage;

- (void)setChatContext:(id)a0;
- (void)setAudioMessage:(BOOL)a0;
- (void)setFromMe:(BOOL)a0;
- (void)setSenderUnauthenticated:(BOOL)a0;
- (void)setSenderUnknown:(BOOL)a0;
- (void)setSpam:(BOOL)a0;

@end
