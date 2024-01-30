@class NSExtension, CXProviderExtensionHostContext;
@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)init;
- (void).cxx_destruct;
- (id)bundle;
- (int)processIdentifier;
- (id)initWithExtension:(id)a0;
- (id)vendorProtocolDelegate;
- (id)identifier;
- (id)initWithExtensionIdentifier:(id)a0;
- (void)beginWithCompletionHandler:(id /* block */)a0;

@end
