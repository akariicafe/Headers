@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    NSDictionary *_propertyValues;
}

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (copy, nonatomic) id /* block */ fallbackArtworkCatalogBlock;

+ (BOOL)supportsSecureCoding;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithModelObject:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
