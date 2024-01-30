@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {
    MFMailMessage *_message;
    unsigned long long _clientID;
    NSString *_bodyData;
}

- (id)to;
- (id)clientID;
- (id)replyTo;
- (id)date;
- (void).cxx_destruct;
- (id)cc;
- (id)from;
- (id)subject;
- (void)setClientID:(unsigned long long)a0;
- (id)serverID;
- (int)bodyType;
- (id)body;
- (id)bcc;
- (id)messageIDHeader;
- (id)initWithMailMessage:(id)a0 clientID:(unsigned long long)a1;

@end
