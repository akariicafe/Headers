@class NSBundle;

@interface INExtensionContextHost : NSExtensionContext

@property (retain, nonatomic) NSBundle *extensionBundle;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;

@end
