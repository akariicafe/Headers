@class _PASXPCClientHelper;

@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)sysdiagnoseInformationWithError:(id *)a0;
- (id)_remoteObjectProxy;

@end
