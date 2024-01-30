@class NSString, MRAVRoutingDiscoverySession, NSArray, MRAVEndpoint;

@interface MRAVEndpointObserver : NSObject {
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_endpoints;
    id /* block */ _endpointChangedCallback;
    BOOL _didBegin;
}

@property (copy, nonatomic) id /* block */ endpointChangedCallback;
@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;

- (void)begin;
- (void)end;
- (void).cxx_destruct;
- (void)_handleOutputContextDidChangeNotification;
- (id)initWithOutputDeviceUID:(id)a0;

@end
