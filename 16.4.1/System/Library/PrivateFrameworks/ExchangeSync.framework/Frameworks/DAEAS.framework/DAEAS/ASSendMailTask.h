@class NSData, NSString;

@interface ASSendMailTask : ASTask {
    NSData *_mimeMessage;
    NSString *_messageID;
}

- (id)command;
- (id)requestBody;
- (void)finishWithError:(id)a0;
- (id)contentType;
- (void).cxx_destruct;
- (BOOL)processContext:(id)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)initWithMessage:(id)a0 messageID:(id)a1;
- (id)parameterData;
- (id)requestBodyStreamOutKnownSize:(int *)a0;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
