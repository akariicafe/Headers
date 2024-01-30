@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long type;
@property (nonatomic) double bodySize;
@property (retain, nonatomic) RWIProtocolNetworkResponse *response;
@property (copy, nonatomic) NSString *sourceMapURL;

- (id)initWithUrl:(id)a0 type:(long long)a1 bodySize:(double)a2;

@end
