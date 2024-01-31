@class NSExtension, CXProviderExtensionHostContext;
@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)init;
- (id)initWithExtension:(id)a0;
- (id)vendorProtocolDelegate;
- (id)bundle;
- (void).cxx_destruct;
- (int)processIdentifier;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtensionIdentifier:(id)a0;

@end
