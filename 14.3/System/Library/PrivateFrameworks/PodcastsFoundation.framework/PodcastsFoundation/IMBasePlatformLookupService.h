@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (id)urlRequest;
- (id)init;
- (void).cxx_destruct;
- (void)performRequest:(id /* block */)a0;
- (id)baseUrl;
- (id)platformAction;

@end
