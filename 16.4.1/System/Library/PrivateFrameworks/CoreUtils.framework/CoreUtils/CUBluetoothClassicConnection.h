@class NSMutableArray, NSString, CUWriteRequest, CBL2CAPChannel, NSObject, CUReadRequest;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable> {
    id /* block */ _activateCompletion;
    BOOL _btConnected;
    char _btDeviceAddrStr[32];
    struct BTSessionImpl { } *_btSession;
    BOOL _btSessionAttaching;
    BOOL _btSessionNeeded;
    BOOL _btSessionStarted;
    BOOL _btServiceAddCallbacks;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) CBL2CAPChannel *l2capChannel;
@property (copy, nonatomic) id /* block */ serverInvalidationHandler;
@property (nonatomic) unsigned int connectionFlags;
@property (copy, nonatomic) NSString *destinationPeer;
@property (copy, nonatomic) NSString *destinationService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int requiredServices;

- (void)writeWithRequest:(id)a0;
- (void)_completeWriteRequest:(id)a0 error:(id)a1;
- (BOOL)_prepareWriteRequest:(id)a0 error:(id *)a1;
- (void)_processWrites;
- (BOOL)_setupIOAndReturnError:(id *)a0;
- (void)_abortReadsWithError:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_run;
- (void)writeEndOfDataWithCompletion:(id /* block */)a0;
- (void)_prepareReadRequest:(id)a0;
- (void)_abortWritesWithError:(id)a0;
- (void)_completeReadRequest:(id)a0 error:(id)a1;
- (struct BTDeviceImpl { } *)_btDeviceWithID:(id)a0 error:(id *)a1;
- (void)readWithRequest:(id)a0;
- (BOOL)_runConnectStart;
- (void)_btEnsureStopped;
- (BOOL)_runSetupChannel;
- (void)dealloc;
- (id)init;
- (void)_reportError:(id)a0;
- (BOOL)_startConnectingAndReturnError:(id *)a0;
- (void)invalidate;
- (void)_invalidate;
- (BOOL)_processReadStatus;
- (BOOL)activateDirectAndReturnError:(id *)a0;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_processReads:(BOOL)a0;
- (BOOL)_runBTSessionStart;
- (BOOL)_runOpenChannelStart;

@end
