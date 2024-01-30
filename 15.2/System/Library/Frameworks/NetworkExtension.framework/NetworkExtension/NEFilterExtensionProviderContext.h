@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_description;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)stopWithReason:(int)a0;
- (void).cxx_destruct;
- (void)startFilterWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
