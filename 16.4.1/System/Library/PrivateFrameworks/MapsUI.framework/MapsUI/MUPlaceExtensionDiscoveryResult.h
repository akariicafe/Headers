@class GEOAppleMediaServicesResult, NSString, _MXExtension;

@interface MUPlaceExtensionDiscoveryResult : NSObject

@property (readonly, nonatomic) _MXExtension *extension;
@property (readonly, nonatomic) GEOAppleMediaServicesResult *appStoreApp;
@property (readonly, nonatomic) NSString *vendorIdentifier;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 appStoreApp:(id)a1 vendorIdentifier:(id)a2;

@end
