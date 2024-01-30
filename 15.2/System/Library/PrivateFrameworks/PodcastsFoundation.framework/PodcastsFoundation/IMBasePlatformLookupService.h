@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (void)performRequest:(id /* block */)a0;
- (id)baseUrl;
- (void).cxx_destruct;
- (id)init;
- (id)urlRequest;
- (id)platformAction;

@end
