@class NSString, NSDictionary, NSURL, NSNumber;

@interface WFWordPressBlog : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *endpointURL;
@property (readonly, copy, nonatomic) NSNumber *blogId;
@property (readonly, copy, nonatomic) NSString *blogName;
@property (readonly, nonatomic) BOOL isAdmin;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;
+ (id)endpointURLJSONTransformer;
+ (id)blogIdJSONTransformer;
+ (id)isAdminJSONTransformer;
+ (id)blogWithEndpointURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithEndpointURL:(id)a0;

@end
