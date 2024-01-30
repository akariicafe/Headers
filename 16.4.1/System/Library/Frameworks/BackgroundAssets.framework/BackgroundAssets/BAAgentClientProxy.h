@class NSString, NSLock, NSXPCConnection;
@protocol BADownloadManagerSyncProtocol;

@interface BAAgentClientProxy : NSObject {
    NSXPCConnection *_connection;
    NSString *_identifier;
    NSLock *_connectionGuard;
    id<BADownloadManagerSyncProtocol> _delegate;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
