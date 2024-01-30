@class IMHandle, NSArray, IMMessage, NSString;

@interface IMMessageRetractionChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL isFailedRetraction;
@property (readonly, nonatomic) BOOL canRetryFailedRetraction;
@property (readonly, nonatomic) long long partIndex;
@property (readonly, copy, nonatomic) NSArray *retractionUnsupportedByHandles;
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, copy, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) unsigned long long replyCount;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;

- (BOOL)canDelete;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 partIndex:(long long)a1 isFailedRetraction:(BOOL)a2 retractionUnsupportedByHandles:(id)a3 sender:(id)a4 isFromMe:(BOOL)a5;
- (id)_retractedMessageItem;

@end
