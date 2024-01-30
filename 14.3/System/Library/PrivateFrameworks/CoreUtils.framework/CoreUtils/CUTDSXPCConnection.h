@class CUTDSSession, NSXPCConnection, CUTDSDaemon, CUTDSProvider, NSObject, CUTDSSeeker;
@protocol OS_dispatch_queue;

@interface CUTDSXPCConnection : NSObject <CUTDSXPCDaemonInterface> {
    CUTDSProvider *_activatedProvider;
    CUTDSSeeker *_activatedSeeker;
    CUTDSSession *_activatedSession;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (readonly, nonatomic) CUTDSDaemon *daemon;
@property (readonly, nonatomic) BOOL entitled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcCnx;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)xpcTDSProviderActivate:(id)a0 completion:(id /* block */)a1;
- (void)xpcTDSSeekerActivate:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemon:(id)a0 xpcCnx:(id)a1;
- (void)xpcTDSSessionActivate:(id)a0 completion:(id /* block */)a1;
- (BOOL)_entitledAndReturnError:(id *)a0;

@end
