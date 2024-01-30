@class NSString;
@protocol FLExtensionHostContextInterface;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface>

@property (weak, nonatomic) id<FLExtensionHostContextInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

@end
