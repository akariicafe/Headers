@class IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 handle:(id)a1;

@end
