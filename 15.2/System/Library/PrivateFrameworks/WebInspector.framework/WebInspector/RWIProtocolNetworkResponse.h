@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming, RWIProtocolSecurity;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *statusText;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long source;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property (retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property (retain, nonatomic) RWIProtocolSecurity *security;

- (id)initWithUrl:(id)a0 status:(int)a1 statusText:(id)a2 headers:(id)a3 mimeType:(id)a4 source:(long long)a5;

@end
