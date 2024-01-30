@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)actionMain;
- (void)_tryDisconnectingSafely:(BOOL)a0;

@end
