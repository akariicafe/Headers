@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (id)baseUrl;
- (id)urlRequest;
- (id)init;
- (void)performRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)platformAction;

@end
