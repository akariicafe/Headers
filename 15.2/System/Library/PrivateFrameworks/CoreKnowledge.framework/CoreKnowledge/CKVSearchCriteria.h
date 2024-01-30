@class NSArray, NSSet;

@interface CKVSearchCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) unsigned char searchMode;
@property (readonly, nonatomic) NSSet *originAppFilters;
@property (readonly, nonatomic) NSSet *fieldTypeFilters;
@property (readonly, nonatomic) NSSet *itemTypeFilters;

+ (id)builderWithMatchTerm:(id)a0;
+ (id)builderWithLikeTerms:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)commandCriteriaFromFilters;
- (id)commandCriteriaFromSearchTerms;
- (id)_commandCriterionFromOriginAppFilters;
- (id)_commandCriterionFromFieldTypeFilters;
- (id)_commandCriterionFromVocabularyItemTypeFilters;
- (id)initWithSearchTerms:(id)a0 searchMode:(unsigned char)a1 originAppFilters:(id)a2 fieldTypeFilters:(id)a3 itemTypeFilters:(id)a4;
- (BOOL)isEqualToSearchCriteria:(id)a0;

@end
