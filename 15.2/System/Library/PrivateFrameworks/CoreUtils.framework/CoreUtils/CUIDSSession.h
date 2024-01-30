@class CUIDSReadRequest, NSString, CUIDSWriteRequest, IDSSession, NSObject, IDSService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUIDSSession : NSObject <IDSServiceDelegate, IDSSessionDelegate> {
    IDSService *_idsService;
    IDSSession *_idsSession;
    BOOL _idsInviting;
    int _idsSock;
    CUIDSReadRequest *_readRequestList;
    id *_readRequestNext;
    CUIDSReadRequest *_readRequestCurr;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readSuspended;
    CUIDSWriteRequest *_writeRequestList;
    id *_writeRequestNext;
    CUIDSWriteRequest *_writeRequestCurr;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeSuspended;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *idsDestination;
@property (nonatomic) BOOL idsEncryption;
@property (copy, nonatomic) NSString *idsInviteToken;
@property (copy, nonatomic) NSString *idsServiceName;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)_handleError:(id)a0;
- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3 withOptions:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)_completeReadRequest:(id)a0 error:(id)a1;
- (void)invalidate;
- (void)session:(id)a0 receivedInvitationAcceptFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationDeclineFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationCancelFromID:(id)a1;
- (void)dealloc;
- (int)_setupSocket;
- (void)readMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_processReadRequests;
- (void)writeData:(id)a0 completion:(id /* block */)a1;
- (void)_processWriteRequests;

@end
