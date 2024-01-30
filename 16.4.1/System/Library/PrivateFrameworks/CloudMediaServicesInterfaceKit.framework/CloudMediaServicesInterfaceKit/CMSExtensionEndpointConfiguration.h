@class NSURL, NSDictionary, NSMutableURLRequest;

@interface CMSExtensionEndpointConfiguration : NSObject

@property (retain, nonatomic) NSURL *endpointURL;
@property (readonly, nonatomic) NSDictionary *groupHeaders;
@property (readonly, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSMutableURLRequest *request;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 endpoint:(id)a1 baseURL:(id)a2 groupHeaders:(id)a3;

@end
