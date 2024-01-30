@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage {
    NSData *_messageData;
    MFMessageHeaders *_headers;
}

- (void).cxx_destruct;
- (void)setHeaders:(id)a0;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setMessageData:(id)a0 isPartial:(BOOL)a1;
- (id)headersIfAvailable;
- (id)headers;
- (id)headerData;
- (id)messageData;

@end
