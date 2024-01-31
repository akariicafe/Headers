@class BAAgentSystemProxy;

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)performEventWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)prepareForAppInstallWithDescriptor:(id)a0 error:(id *)a1;

@end
