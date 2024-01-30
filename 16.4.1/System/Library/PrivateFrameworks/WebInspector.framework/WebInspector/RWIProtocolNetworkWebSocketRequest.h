@class RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkWebSocketRequest : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;

- (id)initWithHeaders:(id)a0;

@end
