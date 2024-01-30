@class APSConnection, NSString, CKAPSMachServiceConnectionKey;

@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate>

@property (weak, nonatomic) APSConnection *connection;
@property (copy, nonatomic) CKAPSMachServiceConnectionKey *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionDidReconnect:(id)a0;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (id)initWithConnection:(id)a0 key:(id)a1;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
