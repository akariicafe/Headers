@class NSString, NSURLSession;

@interface BCNetworkProvider : NSObject <BCNetworkProviderProtocol> {
    NSURLSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
