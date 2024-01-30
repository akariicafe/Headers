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
+ (void)initializeSessionClose;

- (void)_run;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_writeSocketCB:(struct __CFSocket { } *)a0;
- (void)_acceptSocketCB:(struct __CFSocket { } *)a0 acceptedSock:(int)a1;
- (void)_cancelThread;
- (int)_clearPipeStall:(unsigned char)a0;
- (struct IOUSBInterfaceStruct300 **)_createInterfaceFromUSBID:(unsigned long long)a0;
- (id)_dequeueReadBuffer;
- (id)_dequeueWriteBuffer;
- (void)_enqueueReadBuffer:(id)a0;
- (void)_enqueueWriteBuffer:(id)a0;
- (void)_openPipeFromApp;
- (void)_openPipeFromAppOnThread;
- (void)_openPipeToApp;
- (void)_openPipeToAppOnThread;
- (void)_readComplete:(id)a0 readLength:(unsigned long long)a1;
- (void)_readSessionDataFromApp;
- (void)_readSessionDataFromUSB;
- (void)_readSocketCB:(struct __CFSocket { } *)a0;
- (void)_registerListenSocket;
- (void)_sendSessionCloseNotification;
- (void)_sendSessionOpenNotification;
- (void)_writeComplete:(id)a0 writeLength:(unsigned long long)a1;
- (void)_writeSessionDataToApp;
- (void)_writeUSBData:(id)a0;
- (BOOL)closeDataPipes;
- (id)initWithProtocol:(id)a0 endpointUUID:(id)a1 eaSessionUUID:(id)a2 USBDeviceID:(unsigned long long)a3;
- (void)shuttingDownSession;

@end
