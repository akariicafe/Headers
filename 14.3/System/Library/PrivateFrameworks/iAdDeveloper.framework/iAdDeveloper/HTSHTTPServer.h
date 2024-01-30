@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HTSHTTPServerDelegate, OS_dispatch_source;

@interface HTSHTTPServer : NSObject {
    int _listenSocket4;
    NSMutableArray *_activeConnections;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_listenSource4;
    NSString *_nodename;
    unsigned long long _bytesWritten;
    double _lastReplenishTime;
    NSMutableDictionary *_authTokens;
}

@property (nonatomic) struct __CFHTTPMessage { } *currentRequest;
@property (nonatomic) id<HTSHTTPServerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *documentRoot;
@property (nonatomic) BOOL digestAuthenticationEnabled;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) double kbps;
@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (nonatomic) BOOL pipeliningEnabled;
@property (readonly, nonatomic) unsigned long long totalBytesWritten;

- (id)init;
- (void)dealloc;
- (BOOL)_listenOnPort:(unsigned short)a0;
- (void)resetNetworkSetup;
- (id)initWithPort:(unsigned short)a0 documentRoot:(id)a1;
- (void)_cleanupListenSocket;
- (double)_currentLatency;
- (void)_handleGeneralRequest:(id)a0 fromConnection:(id)a1;
- (id)_mimeTypeForExtension:(id)a0;
- (void)_returnResponse:(id)a0 toConnection:(id)a1 closeAfterSending:(BOOL)a2;
- (id)_restrictedFilePathForRelativePath:(id)a0;
- (void)_respondWithData:(id)a0 mimeType:(id)a1 toRequest:(id)a2 connection:(id)a3;
- (id)_authenticationResponseForRequest:(id)a0;
- (void)_connectionComplete:(id)a0;
- (void)_connection:(id)a0 hadError:(id)a1;
- (void)_connection:(id)a0 didReceiveRequest:(id)a1;
- (unsigned long long)availableBandwidth;
- (void)consumedBandwidth:(unsigned long long)a0;

@end
