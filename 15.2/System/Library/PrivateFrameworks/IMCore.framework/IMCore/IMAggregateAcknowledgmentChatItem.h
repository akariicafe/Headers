@class NSArray, IMMessageAcknowledgmentChatItem;

@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSArray *acknowledgments;
@property (readonly, nonatomic) IMMessageAcknowledgmentChatItem *fromMeAcknowledgement;
@property (readonly, nonatomic) BOOL includesFromMe;
@property (readonly, nonatomic) BOOL latestIsFromMe;
@property (readonly, nonatomic) BOOL includesMultiple;
@property (readonly, nonatomic) long long latestAcknowledgmentType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithAcknowledgments:(id)a0;

@end
