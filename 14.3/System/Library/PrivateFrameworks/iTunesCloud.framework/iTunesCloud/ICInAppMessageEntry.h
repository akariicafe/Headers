@class NSString, NSDictionary, ICIAMApplicationMessage, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_metadata;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_resourceCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICIAMApplicationMessage *applicationMessage;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL shouldDownloadResources;
@property (nonatomic) BOOL didCacheRequiredResources;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithApplicationMessage:(id)a0 bundleIdentifier:(id)a1;
- (void)clearCachedResources;
- (id)cachedLocationForResourceWithIdentifier:(id)a0;
- (void)setCacheLocation:(id)a0 forResourceWithIdentifier:(id)a1;
- (void)updateMetadataValue:(id)a0 forKey:(id)a1;
- (id)allCachedResourceLocations;
- (void)encodeWithCoder:(id)a0;

@end
