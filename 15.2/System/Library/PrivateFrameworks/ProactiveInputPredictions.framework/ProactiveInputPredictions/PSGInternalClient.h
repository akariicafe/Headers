@class _PASXPCClientHelper;

@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)sysdiagnoseInformationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_remoteObjectProxy;

@end
