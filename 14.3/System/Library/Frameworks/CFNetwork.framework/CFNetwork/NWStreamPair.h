@class NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface NWStreamPair : __CFNCoreLoggable {
    NSObject<OS_nw_connection> *_connection;
    struct PerSide_CFReadStream { void /* function */ **x0; id x1; char *x2; struct __CFReadStream *x3; unsigned long long x4; id x5; } *_rs;
    struct PerSide_CFWriteStream { void /* function */ **x0; id x1; char *x2; struct __CFWriteStream *x3; unsigned long long x4; long long x5; id x6; } *_ws;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _doneInitialRead;
    struct __CFError { } *_readError;
    struct __CFError { } *_writeError;
    struct ReadBuffer { void /* function */ **x0; long long x1; id x2; long long x3; unsigned char x4; } *_readData;
    unsigned char _atEOF;
    unsigned char _wsClosing;
    unsigned char _rsClosing;
    struct __CFData { } *_cachedPeerName;
    struct __SecTrust { } *_cachedTrust;
    struct __CFArray { } *_cachedPeerCerts;
    long long _outstandingWrites;
}

- (void)dealloc;

@end
