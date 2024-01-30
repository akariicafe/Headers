@class NSArray, ASMailMessage;

@interface ASItemOperationsTask : ASTask {
    NSArray *_commands;
    int _numReplacedItems;
    int _bodyTruncationBytes;
    int _mimeSupport;
    ASMailMessage *_streamingMailMessage;
}

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)commands;
- (id)init;
- (int)bodyType;
- (void)setCommands:(id)a0;
- (void)setMIMESupport:(int)a0;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;
- (id)replacementObjectForEmailItem:(id)a0;
- (int)mimeSupport;
- (int)_mimeSupportCode;
- (BOOL)handleStreamOperation:(int)a0 forCodePage:(int)a1 tag:(int)a2 withParentItem:(id)a3 withData:(char *)a4 dataLength:(int)a5;
- (void)setBodyTruncationBytes:(int)a0;
- (id)streamingMailMessage;
- (void)setStreamingMailMessage:(id)a0;

@end
