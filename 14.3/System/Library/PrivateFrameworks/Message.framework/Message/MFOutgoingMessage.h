@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (void)setMessageBody:(id)a0;
- (void)setMutableHeaders:(id)a0;
- (id)mutableHeaders;
- (id)messageBodyIfAvailable;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (void).cxx_destruct;
- (id)messageDataHolder;
- (id)messageBody;
- (id)headersIfAvailable;
- (id)headers;
- (unsigned long long)messageSize;
- (id)messageData;
- (id)messageStore;

@end
