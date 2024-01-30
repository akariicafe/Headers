@class NSString;

@interface _CNDExtensionContext : NSExtensionContext <_CNDExtensionContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)makeHostProtocol;
+ (id)makeVendorProtocol;


@end
