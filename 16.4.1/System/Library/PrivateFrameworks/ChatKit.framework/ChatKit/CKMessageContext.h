@class IMChatContext;

@interface CKMessageContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) IMChatContext *chatContext;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic, getter=isSpam) BOOL spam;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (readonly, nonatomic, getter=isSenderUnauthenticated) BOOL senderUnauthenticated;
@property (readonly, nonatomic, getter=isAudioMessage) BOOL audioMessage;

+ (id)selfContext;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (id)description;
- (void).cxx_destruct;

@end
