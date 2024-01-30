@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage {
    MFMailMessage *_message;
    unsigned long long _clientID;
    NSString *_bodyData;
}

- (id)subject;
- (id)clientID;
- (id)body;
- (void)setClientID:(unsigned long long)a0;
- (id)date;
- (void).cxx_destruct;
- (id)replyTo;
- (id)bcc;
- (id)cc;
- (id)from;
- (id)to;
- (id)serverID;
- (id)messageIDHeader;
- (int)bodyType;
- (id)initWithMailMessage:(id)a0 clientID:(unsigned long long)a1;

@end
