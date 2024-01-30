@class NSDictionary, NSURL, NSMutableURLRequest, NSMutableSet;

@interface CMSExtensionEndpointConfiguration : NSObject

@property (retain, nonatomic) NSURL *endpointURL;
@property (readonly, nonatomic) NSDictionary *groupHeaders;
@property (readonly, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSMutableURLRequest *request;
@property (retain, nonatomic) NSMutableSet *optionalMethods;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 endpoint:(id)a1 baseURL:(id)a2 groupHeaders:(id)a3;

@end
