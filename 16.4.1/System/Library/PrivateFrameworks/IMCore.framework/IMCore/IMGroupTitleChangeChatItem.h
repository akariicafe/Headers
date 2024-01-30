@class NSString, IMHandle;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) IMHandle *sender;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1;

@end
