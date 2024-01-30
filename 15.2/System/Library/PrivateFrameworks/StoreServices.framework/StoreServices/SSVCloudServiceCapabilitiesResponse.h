@class NSString, SSVSubscriptionStatus;

@interface SSVCloudServiceCapabilitiesResponse : NSObject <SSXPCCoding, NSCopying>

@property (copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus;
@property (nonatomic) BOOL supportsMusicCatalogPlayback;
@property (nonatomic) BOOL supportsAddToCloudMusicLibrary;
@property (nonatomic) BOOL canSubscribeToMusicCatalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithSubscriptionStatusDescriptorBlock:(id /* block */)a0;

@end
