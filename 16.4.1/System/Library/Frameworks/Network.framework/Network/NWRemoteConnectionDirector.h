@class NSMutableArray, NSObject;
@protocol NWRemoteConnectionDirectorDelegate;

@interface NWRemoteConnectionDirector : NSObject

@property (weak) NSObject<NWRemoteConnectionDirectorDelegate> *delegate;
@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *directorProtocol;
@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *defaultOutputHandler;
@property struct nw_hash_table { } *protocolHashTable;
@property (retain) NSMutableArray *writeRequests;
@property (readonly, nonatomic) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property (nonatomic) unsigned long long maximumDataChunkSize;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)createCloseConnectionMessageForClientID:(id)a0;
- (id)createOpenConnectionMessageForClientID:(id)a0 endpoint:(id)a1 parameters:(id)a2;
- (id)createSendDataMessageForClientID:(id)a0 data:(id)a1 receiveWindow:(unsigned int)a2;
- (id)createStartBrowseMessageForClientID:(id)a0 descriptor:(id)a1 parameters:(id)a2;
- (id)createStopBrowseMessageForClientID:(id)a0;
- (unsigned long long)dataModeForFlowID:(id)a0;
- (struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)outputHandlerForFlowID:(id)a0;
- (void)receiveData:(id)a0 forClient:(id)a1;
- (BOOL)receiveRemoteReply:(id)a0;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a0;
- (void)setOutputProtocolHandler:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a0 forFlowID:(id)a1 dataMode:(unsigned long long)a2;

@end
