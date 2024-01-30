@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject <NSCopying> {
    NSMutableDictionary *_functions;
    NSRecursiveLock *_lock;
}

@property (readonly) const struct __CSStore { } *store;
@property (readonly) NSMutableDictionary *userInfo;

+ (void)enumerateValuesForTitlesInDescription:(id)a0 block:(id /* block */)a1;
+ (id)URLForUnit:(unsigned int)a0 inTable:(unsigned int)a1;
+ (id)new;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfValueForTitle:(id)a0 inDescription:(id)a1;
+ (BOOL)unitDescription:(id)a0 referencesUnit:(unsigned int)a1 inTable:(unsigned int)a2;
+ (void)breakDownTable:(const struct Table { struct Unit { unsigned int x0 : 30; unsigned char x1 : 2; unsigned int x2; char x3[0]; } x0; char x1[48]; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *)a0 inStore:(const struct Store { id x0; struct array<unsigned int, 64> { unsigned int x0[64]; } x1; struct Table *x2; struct Table *x3; struct Table *x4; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long x0; } x0; } x5; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long x0; } x0; } x6; struct Pedigree { unsigned long long x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; } x7; } *)a1 buffer:(char *)a2;
+ (id)predicateForSearchingDescriptionWithString:(id)a0 error:(id *)a1;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)a0 block:(id /* block */)a1;
+ (BOOL)getUnit:(unsigned int *)a0 inTable:(unsigned int *)a1 fromURL:(id)a2;

- (id)initWithStore:(struct __CSStore { } *)a0;
- (id)initWithStore:(struct __CSStore { } *)a0 useStandardTableFunctions:(BOOL)a1;
- (void)setFunctions:(id)a0 forTable:(unsigned int)a1;
- (id)descriptionOfUnit:(unsigned int)a0 inTable:(unsigned int)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)summaryOfUnit:(unsigned int)a0 inTable:(unsigned int)a1;
- (id)functionsForTable:(unsigned int)a0;
- (id)breakDownUsage;
- (id)functionsForTableNoCopy:(unsigned int)a0;
- (void)setStandardTableFunctions;
- (void)enumerateReferencesToUnit:(unsigned int)a0 inTable:(unsigned int)a1 block:(id /* block */)a2;
- (id /* block */)handlerForTable:(unsigned int)a0;
- (id)initWithStore:(struct __CSStore { } *)a0 useStandardTableHandlers:(BOOL)a1;
- (void)setHandler:(id /* block */)a0 forTable:(unsigned int)a1;
- (void)setStandardTableHandlers;

@end
