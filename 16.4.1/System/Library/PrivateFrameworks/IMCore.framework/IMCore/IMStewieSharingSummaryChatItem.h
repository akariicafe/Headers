@class IMChat, IMHandle;

@interface IMStewieSharingSummaryChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
}

@property (weak, nonatomic) IMChat *chat;

- (id)handle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 emergencyUserHandle:(id)a1 chat:(id)a2;

@end
