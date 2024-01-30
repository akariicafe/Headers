@class NSString, NSExtension, PKExtensionProvider;

@interface PKExtension : NSObject

@property (weak, nonatomic) PKExtensionProvider *provider;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSString *containingAppBundleIdentifier;
@property (retain, nonatomic) NSString *containingApplicationIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *extensionPointIdentifier;

- (void).cxx_destruct;
- (void)beginExtensionRequestWithCompletion:(id /* block */)a0;
- (void)beginExtensionRequestWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 extension:(id)a1 provider:(id)a2;
- (void)completeLocalExtensionServiceWithCompletion:(id /* block */)a0;
- (void)performTestExtensionServiceRequestWithCompletion:(id /* block */)a0;
- (void)beginLocalExtensionServiceWithUserInteraction:(BOOL)a0 completion:(id /* block */)a1 timeout:(unsigned long long)a2 timeoutHandler:(id /* block */)a3;
- (id)description;

@end
