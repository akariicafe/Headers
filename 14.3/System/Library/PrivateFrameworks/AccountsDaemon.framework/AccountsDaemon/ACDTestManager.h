@class NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;

+ (id)testServer;

- (void)startTestServer;
- (void)stopTestServer;

@end
