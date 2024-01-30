@class NSData, NSString;

@interface MFPOPMessage : MFMailMessage {
    NSData *_messageData;
    BOOL _messageDataIsComplete;
    unsigned long long _size;
    NSString *_accountURL;
}

@property (nonatomic) long long messageNumber;
@property (retain, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSString *messageID;

- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (void).cxx_destruct;
- (id)messageDataHolder;
- (id)originalMailboxURL;
- (void)setMessageSize:(unsigned long long)a0;
- (id)headersIfAvailable;
- (id)headers;
- (id)remoteMailboxURL;
- (unsigned long long)messageSize;
- (void)setAccountURL:(id)a0;
- (void)setMessageData:(id)a0 isComplete:(BOOL)a1;

@end
