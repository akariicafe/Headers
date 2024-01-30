@class NSArray, NSMutableDictionary, NSString, NSDate, NSDictionary, NSMutableOrderedSet;

@interface SBHLibraryCategoryMap : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableOrderedSet *_categoryIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (copy, nonatomic) NSMutableDictionary *sortedApplicationIdentifiersByCategoryIdentifier;
@property (copy, nonatomic) NSMutableDictionary *localizedCategoryNameByCategoryIdentifier;
@property (copy, nonatomic) NSDate *generatedDate;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) BOOL loadedFromDisk;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)diffMap:(id)a0 withMap:(id)a1;

- (void)setMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)categoriesContainApplicationIdentifier:(id)a0;
- (id)categoryIdentifierForProactiveCategoryIdentifier:(unsigned long long)a0;
- (id)categoryIdentifiersForApplicationIdentifier:(id)a0;
- (BOOL)isEqualToCategoryMap:(id)a0;
- (id)localizedCategoryNameForCategoryIdentifier:(id)a0;
- (id)sortedApplicationIdentifiersForCategoryIdentifier:(id)a0;

@end
