@class _PASXPCClientHelper;

@interface HVXPCSysdiagnoseService : NSObject {
    _PASXPCClientHelper *_helper;
}

- (void).cxx_destruct;
- (id)init;
- (id)synchronousProxy;
- (id)sysdiagnoseStringWithError:(id *)a0;

@end
