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

- (id)headers;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)a0;
- (id)messageDataHolder;
- (id)originalMailboxURL;
- (id)headersIfAvailable;
- (id)remoteMailboxURL;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (void)setAccountURL:(id)a0;
- (void)setMessageData:(id)a0 isComplete:(BOOL)a1;

@end
