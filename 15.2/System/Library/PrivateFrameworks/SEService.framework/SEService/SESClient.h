@class NSString, NSXPCConnection;
@protocol SESSessionManagerDelegate;

@interface SESClient : NSObject {
    NSString *_serviceName;
    NSXPCConnection *_connection;
    id<SESSessionManagerDelegate> _sessionDelegate;
}

- (void).cxx_destruct;

@end
