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

- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (id)_initWithModelClass:(Class)a0;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })predicateWithBaseProperty:(struct ModelPropertyBase { void /* function */ **x0; struct EntityClass *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
