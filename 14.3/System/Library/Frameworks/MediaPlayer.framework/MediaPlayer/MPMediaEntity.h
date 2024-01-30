@class MIPMultiverseIdentifier, MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isDownloadableStoreOffer;
@property (readonly, nonatomic) BOOL isPurchasableStoreOffer;
@property (readonly, nonatomic) long long preferredStoreOfferVariant;
@property (readonly, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPMediaItem *representativeItem;
@property (readonly, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier;
@property (readonly, nonatomic) unsigned long long persistentID;

+ (BOOL)canFilterByProperty:(id)a0;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)buyOfferForVariant:(long long)a0;
- (id)completionOfferForVariant:(long long)a0;
- (id)buyOffer;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (id)genericModelObjectWithRequestedProperties:(id)a0;
- (id)valuesForProperties:(id)a0;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)invalidateCachedProperties;
- (id)cachedValueForProperty:(id)a0 isCached:(BOOL *)a1;
- (void)encodeWithCoder:(id)a0;

@end
