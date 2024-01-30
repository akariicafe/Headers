@class NSUUID, NSString, CBL2CAPChannel, CBWriteRequest, CBCentralManager, NSObject, CBReadRequest, CBPeripheral, CBDevice, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CBConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBActivatable, CBLabelable, CBReadWriteRequestable, CBStateReporting> {
    id /* block */ _activateCompletion;
    NSUUID *_blePeerUUID;
    CBCentralManager *_centralManager;
    BOOL _guardConnected;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CBReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CBWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) CBL2CAPChannel *l2capChannel;
@property (copy, nonatomic) id /* block */ serverInvalidationHandler;
@property (nonatomic) unsigned short blePSM;
@property (copy, nonatomic) NSString *clientBundleID;
@property (nonatomic) long long clientUseCase;
@property (nonatomic) long long connectionLatency;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) CBDevice *peerDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) long long bluetoothState;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;

- (void)_run;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)_completeWriteRequest:(id)a0 error:(id)a1;
- (id)init;
- (void)readWithRequest:(id)a0;
- (void)writeWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_reportError:(id)a0;
- (void)_processWrites;
- (void)_invalidated;
- (void)_abortReadsWithError:(id)a0;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (BOOL)_setupIOAndReturnError:(id *)a0;
- (void)_completeReadRequest:(id)a0 error:(id)a1;
- (BOOL)_runSetupChannel;
- (BOOL)_runConnectStart;
- (void)_invalidate;
- (BOOL)_startConnectingAndReturnError:(id *)a0;
- (BOOL)activateDirectAndReturnError:(id *)a0;
- (void)peripheral:(id)a0 didOpenL2CAPChannel:(id)a1 error:(id)a2;
- (void)_processReads:(BOOL)a0;
- (BOOL)_processReadStatus;
- (void)writeEndOfDataWithCompletion:(id /* block */)a0;
- (void)_prepareReadRequest:(id)a0;
- (BOOL)_prepareWriteRequest:(id)a0 error:(id *)a1;
- (void)invalidate;
- (void)_abortWritesWithError:(id)a0;

@end
