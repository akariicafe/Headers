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

- (void)_direct_load;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;
- (void)_xpc_disconnected;
- (void)_xpc_load;
- (void).cxx_destruct;
- (void)_direct_cancel;
- (BOOL)_xpc_disconnect;
- (void)load;
- (void)dealloc;
- (void)cancel;
- (BOOL)_xpc_connect;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;

@end
