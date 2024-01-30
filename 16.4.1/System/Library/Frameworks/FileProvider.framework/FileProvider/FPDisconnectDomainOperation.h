@class NSProgress, FPProviderDomain;

@interface FPDisconnectDomainOperation : FPActionOperation {
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}

- (id)initWithDomain:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)_tryDisconnectingSafely:(BOOL)a0;
- (void)actionMain;

@end
