@class NSString;

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly, nonatomic) MPModelKind *identityKind;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class modelClass;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) MPModelKind *identityKind;

+ (id)kindWithModelClass:(Class)a0;
+ (id)kindWithModelClass:(Class)a0 cacheKey:(id)a1 block:(id /* block */)a2;
+ (id)_kindWithModelClass:(Class)a0 cacheKey:(id)a1 block:(id /* block */)a2;

- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })predicateWithBaseProperty:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (id)_initWithModelClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;

@end
