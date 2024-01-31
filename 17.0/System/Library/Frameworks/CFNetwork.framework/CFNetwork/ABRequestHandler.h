@interface ABRequestHandler : NSObject <AuthBrokerQuery> {
    void *authenticator;
}

- (id)init;
- (void)fetchProxyCredential:(id)a0 reply:(id /* block */)a1;

@end
