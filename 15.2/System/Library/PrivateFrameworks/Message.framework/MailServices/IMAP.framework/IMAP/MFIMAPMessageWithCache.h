@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage {
    NSData *_messageData;
    MFMessageHeaders *_headers;
}

- (void)setHeaders:(id)a0;
- (id)messageData;
- (id)headers;
- (void).cxx_destruct;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setMessageData:(id)a0 isPartial:(BOOL)a1;
- (id)headersIfAvailable;
- (id)headerData;

@end
