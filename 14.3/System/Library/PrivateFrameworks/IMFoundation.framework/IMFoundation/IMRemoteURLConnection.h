@class NSString, IMURLSession, NSObject, NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject

@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL loading;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) int retries;
@property (retain, nonatomic) IMURLSession *URLSession;
@property BOOL requireIDSHost;
@property BOOL forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property BOOL shouldUsePipelining;
@property int concurrentConnections;
@property BOOL disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property BOOL shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) id /* block */ block;

- (void)cancel;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)load;
- (void)_direct_cancel;
- (void).cxx_destruct;
- (void)_xpc_disconnected;
- (void)_xpc_load;
- (void)dealloc;
- (void)_direct_load;
- (BOOL)_xpc_disconnect;
- (BOOL)_xpc_connect;

@end
