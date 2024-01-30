@interface IMReportSpamChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL wasReportedAsSpam;
@property (readonly, nonatomic) BOOL isGroupMessage;
@property (readonly, nonatomic) BOOL hasMultipleMessages;
@property (readonly, nonatomic) BOOL showReportSMSSpam;

- (id)_initWithItem:(id)a0 wasReportedAsSpam:(BOOL)a1 isGroup:(BOOL)a2 hasMultipleMessages:(BOOL)a3 showReportSMSSpam:(BOOL)a4;

@end
