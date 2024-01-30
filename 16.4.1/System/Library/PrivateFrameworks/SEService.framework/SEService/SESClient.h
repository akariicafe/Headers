@class NSString, NSXPCConnection;

@interface SESClient : NSObject {
    NSString *_serviceName;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;

@end
