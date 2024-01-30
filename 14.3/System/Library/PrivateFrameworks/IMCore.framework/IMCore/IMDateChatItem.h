@class NSDate;

@interface IMDateChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSDate *date;

- (id)_initWithItem:(id)a0;
- (id)transcriptDate;

@end
