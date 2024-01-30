@class NSHashTable, _MXExtensionProvider, NSObject;
@protocol OS_dispatch_queue;

@interface _MXExtensionDispatchCenter : NSObject {
    NSObject<OS_dispatch_queue> *_lock;
    NSHashTable *_handlers;
}

@property (readonly, weak, nonatomic) _MXExtensionProvider *extensionProvider;

- (void).cxx_destruct;
- (id)addExtensionsUpdateHandler:(id /* block */)a0;
- (void)dispatchExtensions:(id)a0 error:(id)a1;
- (void)removeExtensionUpdateHandler:(id)a0;
- (id)initWithExtensionProvider:(id)a0;

@end
