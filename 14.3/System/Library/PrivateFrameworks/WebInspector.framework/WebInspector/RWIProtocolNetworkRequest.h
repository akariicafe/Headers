@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *postData;

- (id)initWithUrl:(id)a0 method:(id)a1 headers:(id)a2;

@end
