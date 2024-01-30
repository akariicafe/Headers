@interface ABRequestHandler : NSObject <AuthBrokerQuery> {
    void *authenticator;
}

- (void)fetchProxyCredential:(id)a0 reply:(id /* block */)a1;
- (id)init;

@end
