@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

+ (id)log;

- (void).cxx_destruct;
- (void)setAccount:(id)a0;
- (Class)deliveryClass;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (void)_openConnection;

@end
