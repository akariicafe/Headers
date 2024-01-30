@class PSYOptions, NSXPCConnection;
@protocol PSYConnectionDelegate;

@interface PSYConnection : NSObject

@property (retain, nonatomic) PSYOptions *options;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<PSYConnectionDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (void).cxx_destruct;
- (void)startSync;
- (id)remoteConnection;
- (void)startSyncWithOptions:(id)a0;

@end
