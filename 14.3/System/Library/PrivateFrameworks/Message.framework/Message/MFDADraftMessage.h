@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {
    MFMailMessage *_message;
    unsigned long long _clientID;
    NSString *_bodyData;
}

- (id)to;
- (id)cc;
- (id)bcc;
- (id)clientID;
- (id)from;
- (id)body;
- (id)subject;
- (void).cxx_destruct;
- (id)replyTo;
- (id)date;
- (id)serverID;
- (id)initWithMailMessage:(id)a0 clientID:(unsigned long long)a1;
- (id)messageIDHeader;
- (int)bodyType;
- (void)setClientID:(unsigned long long)a0;

@end
