@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

- (void)setAccount:(id)a0;
- (void)dealloc;
- (void)_openConnection;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (Class)deliveryClass;

@end
