@class NSString, NSMutableDictionary;

@interface NFMIDSServiceDelegate : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) NSMutableDictionary *inflightMessages;
@property (retain, nonatomic) NSMutableDictionary *pendingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)_sendProtoBuf:(id)a0 service:(id)a1 priority:(long long)a2 responseIdentifier:(id)a3 expectsResponse:(BOOL)a4;
- (void)_enqueueMessage:(id)a0 service:(id)a1 priority:(long long)a2 responseIdentifier:(id)a3 expectsResponse:(BOOL)a4 retryCount:(long long)a5 retryInterval:(double)a6 idsIdentifier:(id)a7;
- (id)sendProtoBuf:(id)a0 service:(id)a1 priority:(long long)a2 responseIdentifier:(id)a3 expectsResponse:(BOOL)a4 retryCount:(long long)a5 retryInterval:(double)a6;

@end
