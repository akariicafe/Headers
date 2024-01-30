@class NSString, NSDate, TSUSparseArray;

@interface TSCEStock : NSObject

@property (readonly, nonatomic) TSUSparseArray *attributes;
@property (retain, nonatomic) NSString *symbol;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *dateString;
@property (readonly, nonatomic) BOOL up;

+ (id)kNilStockAttributeString;
+ (id)nativeLocaleIdentifier;
+ (id)stockWithAttributes:(id)a0;
+ (id)stockFromArchive:(const struct StockArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::StockArchive_AttributeEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; double x6; } *)a0;

- (id)initWithAttributes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSymbol:(id)a0;
- (id)valueForAttribute:(long long)a0;
- (id)initFromArchive:(const struct StockArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::StockArchive_AttributeEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; double x6; } *)a0;
- (void)encodeToArchive:(struct StockArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::StockArchive_AttributeEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; double x6; } *)a0;
- (void)p_populateAttributesFromArray:(id)a0;
- (void)p_setFormattedAttr:(long long)a0 fromArray:(id)a1;
- (id)valueForAttribute:(long long)a0 forLocale:(id)a1;
- (id)abbreviatedNumberForAttribute:(long long)a0 atLocale:(id)a1;

@end
