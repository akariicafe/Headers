@class NSString, _TtC12SmartReplies21SRSmartRepliesMessage, NSDate;

@interface SROSmartRepliesMessage : NSObject {
    _TtC12SmartReplies21SRSmartRepliesMessage *_underlyingMessage;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic, getter=isTapBack) BOOL tapBack;
@property (nonatomic, getter=isEmote) BOOL emote;
@property (nonatomic, getter=isRead) BOOL read;
@property (retain, nonatomic) NSDate *dateSent;

- (id)init;
- (void).cxx_destruct;

@end
