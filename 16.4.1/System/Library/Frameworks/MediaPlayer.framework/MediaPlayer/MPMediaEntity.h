@class MIPMultiverseIdentifier, MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPMediaItem *representativeItem;
@property (readonly, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier;
@property (readonly, nonatomic) unsigned long long persistentID;

+ (BOOL)canFilterByProperty:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)cachedValueForProperty:(id)a0 isCached:(BOOL *)a1;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)genericModelObjectWithRequestedProperties:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (void)invalidateCachedProperties;
- (id)valuesForProperties:(id)a0;

@end
