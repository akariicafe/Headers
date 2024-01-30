@class NSString;
@protocol RPExtensionContextDelegate;

@interface RPExtensionContext : NSExtensionContext <RPExtensionVendorProtocol>

@property (weak, nonatomic) id<RPExtensionContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)setEndpoint:(id)a0 completionHandler:(id /* block */)a1;

@end
