@class NSString;

@interface NEProviderXPCListener : NSXPCListener

@property (readonly, nonatomic) NSString *extensionContextClassName;

- (id)initWithExtensionContextClassName:(id)a0;
- (void).cxx_destruct;

@end
