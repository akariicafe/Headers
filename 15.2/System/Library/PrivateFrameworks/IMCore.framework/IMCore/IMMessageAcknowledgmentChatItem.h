@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem

@property (readonly, nonatomic) long long messageAcknowledgmentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 sender:(id)a1 messageAcknowledgmentType:(long long)a2;

@end
