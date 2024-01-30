@class NSData, NSString;

@interface ASSendMailTask : ASTask {
    NSData *_mimeMessage;
    NSString *_messageID;
}

- (id)requestBody;
- (void)finishWithError:(id)a0;
- (id)contentType;
- (id)command;
- (void).cxx_destruct;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;
- (id)parameterData;
- (id)initWithMessage:(id)a0 messageID:(id)a1;
- (id)requestBodyStreamOutKnownSize:(int *)a0;

@end
