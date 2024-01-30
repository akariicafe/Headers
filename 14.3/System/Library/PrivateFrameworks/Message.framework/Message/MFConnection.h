@class NSArray, NSString, MFConnectionSettings;
@protocol ECSASLSecurityLayer, ECNWConnectionWrapper;

@interface MFConnection : NSObject <ECAuthenticatableConnection, MFDiagnosticsGenerator> {
    id<ECSASLSecurityLayer> _securityLayer;
    MFConnectionSettings *_connectionSettings;
    id<ECNWConnectionWrapper> _socket;
    double _lastUsedTime;
    char *_buffer;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    unsigned long long _bufferLength;
    unsigned long long _desiredBufferLength;
    struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *_deflater;
    struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int x4; unsigned long long x5; char *x6; struct internal_state *x7; void /* function */ *x8; void /* function */ *x9; void *x10; int x11; unsigned long long x12; unsigned long long x13; } *_inflater;
    char *_zbuffer;
    unsigned int _readBytesNotLogged;
    _Atomic BOOL _isFetching;
    BOOL _compressionEnabled;
}

@property BOOL isFetching;
@property (readonly, nonatomic) double lastUsedTime;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSArray *authenticationMechanisms;
@property (readonly, nonatomic) NSString *securityProtocol;
@property (readonly, nonatomic) NSString *accountLogString;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasBytesAvailable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isConstrained;
@property (readonly, nonatomic) BOOL loginDisabled;
@property (readonly, nonatomic) BOOL usesOpportunisticSockets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)shouldTryFallbacksAfterError:(id)a0;
+ (void)readLoggingDefaults;
+ (void)logConnection:(id)a0 type:(long long)a1 data:(id)a2;
+ (id)logClasses;
+ (void)setLogClasses:(id)a0;
+ (BOOL)logAllSocketActivity;
+ (void)setLogAllSocketActivity:(BOOL)a0;
+ (id)logActivityOnPorts;
+ (void)setLogActivityOnPorts:(id)a0;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnHosts:(id)a0;
+ (void)flushLog;

- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (BOOL)connectUsingFallbacksForAccount:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0;
- (BOOL)connectUsingAccount:(id)a0;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)enableThroughputMonitoring:(BOOL)a0;
- (BOOL)_evaluateTrust:(struct __SecTrust { } *)a0 errorPtr:(id *)a1;
- (void)_setupSocketWithSettings:(id)a0;
- (BOOL)connectUsingSettings:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0 authenticator:(id)a1;
- (BOOL)writeData:(id)a0 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)writeBytes:(const char *)a0 length:(unsigned long long)a1 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_clearBuffer;
- (void)endCompression;
- (BOOL)_certificateIsTrustedForAccount:(id)a0;
- (void)_setCertificateIsTrusted:(BOOL)a0 forAccount:(id)a1;
- (void)setDesiredReadBufferLength:(unsigned long long)a0;
- (void)logReadChars:(const char *)a0 length:(unsigned long long)a1;
- (BOOL)readLineIntoData:(id)a0;
- (BOOL)readBytesIntoData:(id)a0 desiredLength:(unsigned long long)a1;
- (BOOL)startTLSForAccount:(id)a0;
- (BOOL)enableSSL;
- (BOOL)startCompression;
- (id)connectionSettings;
- (void)setConnectionSettings:(id)a0;
- (BOOL)writeData:(id)a0;
- (void)startActivity;
- (void)stopActivity;

@end
