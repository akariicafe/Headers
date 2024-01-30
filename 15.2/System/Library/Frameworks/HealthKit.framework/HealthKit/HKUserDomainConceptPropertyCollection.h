@class NSArray;

@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) long long count;

+ (id)propertyCollectionByMergingOntologyContentIntoCollection:(id)a0 fromCollection:(id)a1;
+ (id)propertyCollectionByMergingCollection:(id)a0 otherCollection:(id)a1;

- (id)initWithProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_propertiesByType;
- (id)propertyCollectionByMerging:(id)a0;
- (id)propertyCollectionByMergingRefreshedOntologyContentPropertyCollection:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)firstPropertyWithType:(long long)a0;
- (id)collectionByAddingProperties:(id)a0;

@end
