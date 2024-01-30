@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

- (void)setAccount:(id)a0;
- (void)dealloc;
- (Class)deliveryClass;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (void)_openConnection;

@end
