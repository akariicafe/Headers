@class NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface NWStreamPair : __CFNCoreLoggable {
    NSObject<OS_nw_connection> *_connection;
    void *_rs;
    void *_ws;
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
