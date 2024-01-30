@class NSExtension, CXProviderExtensionHostContext;
@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)initWithExtension:(id)a0;
- (id)bundle;
- (void).cxx_destruct;
- (id)init;
- (int)processIdentifier;
- (id)vendorProtocolDelegate;
- (id)initWithExtensionIdentifier:(id)a0;
- (void)beginWithCompletionHandler:(id /* block */)a0;

@end
