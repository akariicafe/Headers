@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (id)messageStore;
- (id)messageData;
- (void)setMessageBody:(id)a0;
- (id)headers;
- (id)messageBody;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (id)messageDataHolder;
- (id)headersIfAvailable;
- (void)setMutableHeaders:(id)a0;
- (id)mutableHeaders;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;

@end
