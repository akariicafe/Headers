@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

+ (id)log;

- (void)setAccount:(id)a0;
- (void)_openConnection;
- (void).cxx_destruct;
- (Class)deliveryClass;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;

@end
