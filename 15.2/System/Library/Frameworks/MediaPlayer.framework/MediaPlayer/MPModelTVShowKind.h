@class MPModelTVSeasonKind;

@interface MPModelTVShowKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithSeasonKind:(id)a0;

- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (void)encodeWithCoder:(id)a0;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (id)humanDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
