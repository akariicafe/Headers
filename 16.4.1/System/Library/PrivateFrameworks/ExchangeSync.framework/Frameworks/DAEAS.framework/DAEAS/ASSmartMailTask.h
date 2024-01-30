@class NSString;

@interface ASSmartMailTask : ASSendMailTask {
    int _messageType;
    NSString *_originalMessageId;
    NSString *_instanceId;
    NSString *_originalFolderId;
    NSString *_originalLongId;
    BOOL _retryWithoutReferences;
    BOOL _replaceMime;
}

@property (nonatomic) BOOL shouldNotRetry;

- (id)command;
- (id)contentType;
- (void).cxx_destruct;
- (BOOL)processContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (void)handleTopLevelErrorStatus:(id)a0;
- (id)initWithMessage:(id)a0 messageID:(id)a1 messageType:(int)a2 originalMessageID:(id)a3 instanceId:(id)a4 originalFolderID:(id)a5 originalLongID:(id)a6 replaceMime:(BOOL)a7;
- (id)parameterData;
- (id)requestBodyStreamOutKnownSize:(int *)a0;

@end
