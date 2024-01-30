@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) IMBalloonPluginDataSource *dataSource;

- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 dataSource:(id)a1;

@end
