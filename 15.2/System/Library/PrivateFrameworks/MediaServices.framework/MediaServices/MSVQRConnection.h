@class NSNumber, IDSGroupSession, MSVBlockGuard, NSString, NSObject, MSVQRConnectionMessageCoder;
@protocol MSVQRConnectionDelegate, OS_nw_protocol_definition, MSVQRConnectionSessionDataSource, MSVQRConnectionReportProtocol, OS_dispatch_queue, OS_nw_connection;

@interface MSVQRConnection : NSObject <IDSGroupSessionDelegate>

@property (readonly, nonatomic) NSObject<OS_nw_protocol_definition> *framerDefinition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) MSVQRConnectionMessageCoder *messageCoder;
@property (retain, nonatomic) IDSGroupSession *session;
@property (copy, nonatomic) NSNumber *participantIdentifier;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL shouldTerminate;
@property (retain, nonatomic) MSVBlockGuard *guard;
@property (weak, nonatomic) id<MSVQRConnectionDelegate> delegate;
@property (readonly, nonatomic) id<MSVQRConnectionSessionDataSource> dataSource;
@property (weak, nonatomic) id<MSVQRConnectionReportProtocol> report;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithDataSource:(id)a0 messageCoder:(id)a1;
+ (id)createFramerDefinition;

- (void)_clearState;
- (void)sendMessage:(id)a0;
- (void)_terminateWithError:(id)a0;
- (void)session:(id)a0 didRegisterPluginAllocationInfo:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)sessionDidJoinGroup:(id)a0 participantUpdate:(id)a1 error:(id)a2;
- (void)dealloc;
- (void)stop;
- (id)initWithDataSource:(id)a0 messageCoder:(id)a1;
- (void)_createGroupSession;
- (void)_sendPathWithCompletion:(id /* block */)a0;
- (void)_connectionStateDidChangeWithError:(id)a0;
- (void)_receiveNextMessage;
- (void)_createQuicConnection;

@end
