@class PSYOptions, NSXPCConnection;
@protocol PSYConnectionDelegate;

@interface PSYConnection : NSObject

@property (retain, nonatomic) PSYOptions *options;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<PSYConnectionDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)init;
- (void)startSync;
- (id)remoteConnection;
- (void)startSyncWithOptions:(id)a0;

@end
