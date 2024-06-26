@class GCDAsyncWritePacket, NSString, GCDAsyncReadPacket, NSData, GCDAsyncSocketPreBuffer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GCDAsyncSocket : NSObject {
    unsigned int flags;
    unsigned short config;
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    GCDAsyncReadPacket *currentRead;
    GCDAsyncWritePacket *currentWrite;
    unsigned long long socketFDBytesAvailable;
    GCDAsyncSocketPreBuffer *preBuffer;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } streamContext;
    struct __CFReadStream { } *readStream;
    struct __CFWriteStream { } *writeStream;
    struct SSLContext { } *sslContext;
    GCDAsyncSocketPreBuffer *sslPreBuffer;
    unsigned long long sslWriteCachedLength;
    int sslErrCode;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
}

@property (weak) id delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isIPv4Enabled) BOOL IPv4Enabled;
@property (getter=isIPv6Enabled) BOOL IPv6Enabled;
@property (getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property (retain) id userData;
@property (readonly) BOOL isDisconnected;
@property (readonly) BOOL isConnected;
@property (readonly) NSString *connectedHost;
@property (readonly) unsigned short connectedPort;
@property (readonly) NSString *localHost;
@property (readonly) unsigned short localPort;
@property (readonly) NSData *connectedAddress;
@property (readonly) NSData *localAddress;
@property (readonly) BOOL isIPv4;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isSecure;
@property BOOL autoDisconnectOnClosedReadStream;

+ (void)ignore:(id)a0;
+ (id)CRData;
+ (id)LFData;
+ (id)lookupHost:(id)a0 port:(unsigned short)a1 error:(id *)a2;
+ (BOOL)isIPv4Address:(id)a0;
+ (BOOL)isIPv6Address:(id)a0;
+ (unsigned short)portFromAddress:(id)a0;
+ (id)hostFromSockaddr4:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a0;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a0;
+ (void)cfstreamThread;
+ (void)startCFStreamThreadIfNeeded;
+ (void)scheduleCFStreams:(id)a0;
+ (void)unscheduleCFStreams:(id)a0;
+ (void)stopCFStreamThreadIfNeeded;
+ (id)gaiError:(int)a0;
+ (BOOL)getHost:(id *)a0 port:(unsigned short *)a1 fromAddress:(id)a2;
+ (BOOL)getHost:(id *)a0 port:(unsigned short *)a1 family:(char *)a2 fromAddress:(id)a3;
+ (id)hostFromAddress:(id)a0;
+ (id)CRLFData;
+ (id)ZeroData;

- (void)disconnect;
- (void)performBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeWithError:(id)a0;
- (int)socketFD;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)readDataWithTimeout:(double)a0 tag:(long long)a1;
- (void)writeData:(id)a0 withTimeout:(double)a1 tag:(long long)a2;
- (BOOL)connectToHost:(id)a0 onPort:(unsigned short)a1 error:(id *)a2;
- (void)startTLS:(id)a0;
- (BOOL)enableBackgroundingOnSocket;
- (BOOL)acceptOnPort:(unsigned short)a0 error:(id *)a1;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 socketQueue:(id)a2;
- (void)setDelegate:(id)a0 synchronously:(BOOL)a1;
- (void)setDelegateQueue:(id)a0 synchronously:(BOOL)a1;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1 synchronously:(BOOL)a2;
- (BOOL)acceptOnInterface:(id)a0 port:(unsigned short)a1 error:(id *)a2;
- (id)errnoErrorWithReason:(id)a0;
- (id)badConfigError:(id)a0;
- (void)getInterfaceAddress4:(id *)a0 address6:(id *)a1 fromDescription:(id)a2 port:(unsigned short)a3;
- (id)badParamError:(id)a0;
- (unsigned short)localPort4;
- (BOOL)doAccept:(int)a0;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)a0;
- (BOOL)connectToHost:(id)a0 onPort:(unsigned short)a1 withTimeout:(double)a2 error:(id *)a3;
- (BOOL)connectToHost:(id)a0 onPort:(unsigned short)a1 viaInterface:(id)a2 withTimeout:(double)a3 error:(id *)a4;
- (BOOL)preConnectWithInterface:(id)a0 error:(id *)a1;
- (void)lookup:(int)a0 didFail:(id)a1;
- (void)lookup:(int)a0 didSucceedWithAddress4:(id)a1 address6:(id)a2;
- (void)startConnectTimeout:(double)a0;
- (BOOL)connectToAddress:(id)a0 viaInterface:(id)a1 withTimeout:(double)a2 error:(id *)a3;
- (BOOL)connectWithAddress4:(id)a0 address6:(id)a1 error:(id *)a2;
- (id)otherError:(id)a0;
- (void)endConnectTimeout;
- (void)didConnect:(int)a0;
- (void)didNotConnect:(int)a0 error:(id)a1;
- (BOOL)createReadAndWriteStream;
- (BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)a0;
- (BOOL)addStreamsToRunLoop;
- (BOOL)openStreams;
- (void)maybeDequeueRead;
- (void)maybeDequeueWrite;
- (void)doConnectTimeout;
- (id)connectTimeoutError;
- (void)endCurrentRead;
- (void)endCurrentWrite;
- (void)removeStreamsFromRunLoop;
- (void)resumeReadSource;
- (void)resumeWriteSource;
- (void)maybeClose;
- (id)connectedHostFromSocket4:(int)a0;
- (id)connectedHostFromSocket6:(int)a0;
- (unsigned short)connectedPortFromSocket4:(int)a0;
- (unsigned short)connectedPortFromSocket6:(int)a0;
- (id)localHostFromSocket4:(int)a0;
- (id)localHostFromSocket6:(int)a0;
- (unsigned short)localPortFromSocket4:(int)a0;
- (unsigned short)localPortFromSocket6:(int)a0;
- (void)doReadData;
- (void)doReadEOF;
- (void)doWriteData;
- (void)readDataWithTimeout:(double)a0 buffer:(id)a1 bufferOffset:(unsigned long long)a2 maxLength:(unsigned long long)a3 tag:(long long)a4;
- (void)readDataToLength:(unsigned long long)a0 withTimeout:(double)a1 buffer:(id)a2 bufferOffset:(unsigned long long)a3 tag:(long long)a4;
- (void)readDataToData:(id)a0 withTimeout:(double)a1 buffer:(id)a2 bufferOffset:(unsigned long long)a3 maxLength:(unsigned long long)a4 tag:(long long)a5;
- (void)maybeStartTLS;
- (void)setupReadTimerWithTimeout:(double)a0;
- (void)flushSSLBuffers;
- (BOOL)usingCFStreamForTLS;
- (void)suspendReadSource;
- (BOOL)usingSecureTransportForTLS;
- (void)ssl_continueSSLHandshake;
- (id)readMaxedOutError;
- (id)sslError:(int)a0;
- (void)completeCurrentRead;
- (id)connectionClosedError;
- (void)doReadTimeout;
- (void)doReadTimeoutWithExtension:(double)a0;
- (id)readTimeoutError;
- (void)setupWriteTimerWithTimeout:(double)a0;
- (void)suspendWriteSource;
- (void)completeCurrentWrite;
- (void)doWriteTimeout;
- (void)doWriteTimeoutWithExtension:(double)a0;
- (id)writeTimeoutError;
- (void)ssl_startTLS;
- (void)cf_startTLS;
- (void)ssl_shouldTrustPeer:(BOOL)a0 stateIndex:(int)a1;
- (BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)a0;
- (id)initWithSocketQueue:(id)a0;
- (void)synchronouslySetDelegate:(id)a0;
- (void)synchronouslySetDelegateQueue:(id)a0;
- (void)getDelegate:(id *)a0 delegateQueue:(id *)a1;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1;
- (void)synchronouslySetDelegate:(id)a0 delegateQueue:(id)a1;
- (BOOL)connectToAddress:(id)a0 error:(id *)a1;
- (BOOL)connectToAddress:(id)a0 withTimeout:(double)a1 error:(id *)a2;
- (void)disconnectAfterReading;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReadingAndWriting;
- (id)errnoError;
- (id)connectedHost4;
- (id)connectedHost6;
- (unsigned short)connectedPort4;
- (unsigned short)connectedPort6;
- (id)localHost4;
- (id)localHost6;
- (unsigned short)localPort6;
- (void)readDataWithTimeout:(double)a0 buffer:(id)a1 bufferOffset:(unsigned long long)a2 tag:(long long)a3;
- (void)readDataToLength:(unsigned long long)a0 withTimeout:(double)a1 tag:(long long)a2;
- (void)readDataToData:(id)a0 withTimeout:(double)a1 tag:(long long)a2;
- (void)readDataToData:(id)a0 withTimeout:(double)a1 buffer:(id)a2 bufferOffset:(unsigned long long)a3 tag:(long long)a4;
- (void)readDataToData:(id)a0 withTimeout:(double)a1 maxLength:(unsigned long long)a2 tag:(long long)a3;
- (float)progressOfReadReturningTag:(long long *)a0 bytesDone:(unsigned long long *)a1 total:(unsigned long long *)a2;
- (float)progressOfWriteReturningTag:(long long *)a0 bytesDone:(unsigned long long *)a1 total:(unsigned long long *)a2;
- (int)sslReadWithBuffer:(void *)a0 length:(unsigned long long *)a1;
- (int)sslWriteWithBuffer:(const void *)a0 length:(unsigned long long *)a1;
- (void)cf_finishSSLHandshake;
- (void)cf_abortSSLHandshake:(id)a0;
- (void)markSocketQueueTargetQueue:(id)a0;
- (void)unmarkSocketQueueTargetQueue:(id)a0;
- (int)socket4FD;
- (int)socket6FD;
- (struct __CFReadStream { } *)readStream;
- (struct __CFWriteStream { } *)writeStream;
- (BOOL)enableBackgroundingOnSocketWithCaveat;
- (struct SSLContext { } *)sslContext;

@end
