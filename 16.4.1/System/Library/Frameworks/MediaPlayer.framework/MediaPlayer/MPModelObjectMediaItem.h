@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    NSDictionary *_propertyValues;
}

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (copy, nonatomic) id /* block */ fallbackArtworkCatalogBlock;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)persistentID;
- (id)initWithModelObject:(id)a0;
- (id)initWithPersistentID:(unsigned long long)a0;

@end
