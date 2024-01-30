@class NSXPCConnection;

@interface _UIDruidSourceWarmUpConnection : NSObject {
    NSXPCConnection *_connection;
}

- (void)warmUp;
- (void).cxx_destruct;

@end
