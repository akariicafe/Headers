@class _MFSocket, NSArray, NSString, MFConnectionSettings;
@protocol MFSASLSecurityLayer;

@interface MFConnection : NSObject <MFDiagnosticsGenerator> {
    id<MFSASLSecurityLayer> _securityLayer;
    MFConnectionSettings *_connectionSettings;
    _MFSocket *_socket;
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
    unsigned char _isFetching : 1;
    unsigned char _allowFallbacks : 1;
    unsigned char _compressionEnabled : 1;
}

@property (nonatomic) BOOL isFetching;
@property (readonly, nonatomic) double lastUsedTime;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSArray *authenticationMechanisms;
@property (readonly, nonatomic) NSString *securityProtocol;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasBytesAvailable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL loginDisabled;
@property (readonly, nonatomic) BOOL usesOpportunisticSockets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)flushLog;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (BOOL)logAllSocketActivity;
+ (id)logClasses;
+ (void)logConnection:(id)a0 type:(long long)a1 data:(id)a2;
+ (void)readLoggingDefaults;
+ (void)setLogActivityOnHosts:(id)a0;
+ (void)setLogActivityOnPorts:(id)a0;
+ (void)setLogAllSocketActivity:(BOOL)a0;
+ (void)setLogClasses:(id)a0;
+ (BOOL)shouldTryFallbacksAfterError:(id)a0;

- (BOOL)writeData:(id)a0;
- (void)disconnect;
- (void)enableThroughputMonitoring:(BOOL)a0;
- (void)dealloc;
- (id)init;
- (id)copyDiagnosticInformation;
- (void)_setupSocketWithSettings:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0;
- (BOOL)authenticateUsingAccount:(id)a0 authenticator:(id)a1;
- (BOOL)connectUsingAccount:(id)a0;
- (BOOL)connectUsingFallbacksForAccount:(id)a0;
- (BOOL)connectUsingSettings:(id)a0;
- (id)connectionSettings;
- (void)endCompression;
- (void)logReadChars:(const char *)a0 length:(unsigned long long)a1;
- (BOOL)readBytesIntoData:(id)a0 desiredLength:(unsigned long long)a1;
- (BOOL)readLineIntoData:(id)a0;
- (void)setConnectionSettings:(id)a0;
- (void)setDesiredReadBufferLength:(unsigned long long)a0;
- (BOOL)startCompression;
- (BOOL)startTLSForAccount:(id)a0;
- (BOOL)writeBytes:(const char *)a0 length:(unsigned long long)a1 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)writeData:(id)a0 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAllowsFallbacks:(BOOL)a0;

@end
