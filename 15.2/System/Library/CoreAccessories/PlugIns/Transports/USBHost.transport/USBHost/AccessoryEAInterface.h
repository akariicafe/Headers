@class NSString, NSThread, NSMutableArray, NSRunLoop;

@interface AccessoryEAInterface : iAP2EASession {
    NSMutableArray *_writeBufferArray;
    NSMutableArray *_readBufferArray;
    NSMutableArray *_dataForAppArray;
    NSMutableArray *_allReadBuffers;
    NSMutableArray *_allWriteBuffers;
    struct __CFSocket { } *_listenSockRef;
    struct __CFRunLoopSource { } *_listenSockRls;
    struct __CFSocket { } *_sockRef;
    struct __CFRunLoopSource { } *_sockRls;
    BOOL _sockReadDisabled;
    unsigned long long _deviceID;
    NSString *_protocolName;
    struct IOUSBInterfaceStruct300 **_usbInterface;
    struct __CFRunLoopSource { } *_usbRls;
    unsigned char _inPipe;
    unsigned char _outPipe;
    unsigned short _maxInSize;
    unsigned short _maxOutSize;
    unsigned int _interfaceSpeed;
    NSThread *_runLoopThread;
    NSRunLoop *_runLoop;
}

@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (copy, nonatomic) id /* block */ dataInHandler;

+ (id)findNativeEAInterfacesForRegistryID:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_run;
- (void)dealloc;
- (void)shuttingDownSession;
- (id)initWithProtocol:(id)a0 endpointUUID:(id)a1 eaSessionUUID:(id)a2 USBDeviceID:(unsigned long long)a3;
- (void)_openPipeToApp;
- (void)_openPipeFromApp;
- (BOOL)closeDataPipes;
- (void)_enqueueReadBuffer:(id)a0;
- (void)_enqueueWriteBuffer:(id)a0;
- (void)_registerListenSocket;
- (struct IOUSBInterfaceStruct300 **)_createInterfaceFromUSBID:(unsigned long long)a0;
- (void)_readSessionDataFromApp;
- (void)_writeSessionDataToApp;
- (void)_openPipeToAppOnThread;
- (void)_readSessionDataFromUSB;
- (void)_openPipeFromAppOnThread;
- (void)_cancelThread;
- (id)_dequeueWriteBuffer;
- (void)_writeUSBData:(id)a0;
- (int)_clearPipeStall:(unsigned char)a0;
- (void)_writeComplete:(id)a0 writeLength:(unsigned long long)a1;
- (id)_dequeueReadBuffer;
- (void)_acceptSocketCB:(struct __CFSocket { } *)a0 acceptedSock:(int)a1;
- (void)_readSocketCB:(struct __CFSocket { } *)a0;
- (void)_writeSocketCB:(struct __CFSocket { } *)a0;
- (void)_readComplete:(id)a0 readLength:(unsigned long long)a1;

@end
