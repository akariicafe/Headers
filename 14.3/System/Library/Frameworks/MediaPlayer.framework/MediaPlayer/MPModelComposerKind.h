@class MPModelAlbumKind;

@interface MPModelComposerKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelAlbumKind *albumKind;

+ (BOOL)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithAlbumKind:(id)a0;

- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (BOOL)isEqual:(id)a0;
- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;

@end
