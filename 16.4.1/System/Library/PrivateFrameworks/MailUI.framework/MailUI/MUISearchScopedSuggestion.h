@class MUISearchAtomSuggestion, MUISearchSuggestionCategoryScope, NSPredicate;

@interface MUISearchScopedSuggestion : MUISearchAtomSuggestion <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MUISearchAtomSuggestion *suggestion;
@property (nonatomic) unsigned long long selectedScopeIndex;
@property (readonly, nonatomic) MUISearchSuggestionCategoryScope *selectedScope;
@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)scopedSuggestion:(id)a0;
+ (id)scopedSuggestion:(id)a0 selectedScopeIndex:(unsigned long long)a1;

- (id)contactIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)subtitle;
- (id)category;
- (id)image;
- (id)title;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;
- (id)atomImage;
- (id)atomTitle;
- (id)initWithSuggestion:(id)a0 selectedScopeIndex:(unsigned long long)a1;
- (id)predicateWithSelectedScope:(id)a0;

@end
