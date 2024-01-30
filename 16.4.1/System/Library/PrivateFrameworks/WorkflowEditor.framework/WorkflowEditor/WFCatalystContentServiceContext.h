@class NSString;
@protocol WFCatalystContentHost;

@interface WFCatalystContentServiceContext : NSExtensionContext <WFCatalystContentService>

@property (readonly, nonatomic) id<WFCatalystContentHost> hostProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;


@end
