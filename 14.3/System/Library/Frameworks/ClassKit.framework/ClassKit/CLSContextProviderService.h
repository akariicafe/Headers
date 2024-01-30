@class CLSContextProviderExtensionHostContext, NSString, NSUUID, CLSContextProviderExtensionContext, NSArray, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface CLSContextProviderService : NSObject {
    NSObject<OS_dispatch_queue> *_serviceConnectionQueue;
    NSExtension *_extension;
    NSUUID *_sessionUUID;
    CLSContextProviderExtensionHostContext *_extensionHostContext;
    CLSContextProviderExtensionContext *_extensionContext;
    NSArray *_mainAppContextPath;
    _Atomic int _connectionCount;
}

@property (readonly, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *localizedAppName;

- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (id)initWithExtension:(id)a0;
- (void)getMainAppContextPathWithCompletion:(id /* block */)a0;
- (void)updateDescendantsOfContextPath:(id)a0 completion:(id /* block */)a1;

@end
