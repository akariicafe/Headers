@class TSULocale, TSKFormat, TSCEFormulaObject;

@interface TSTGroupingColumn : TSKSosBase <NSCopying> {
    TSKFormat *_groupingFormat;
    BOOL _groupingFormatComputed;
    TSULocale *_docLocale;
}

@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } groupingColumnUid;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } columnUid;
@property (readonly, nonatomic) int groupingType;
@property (readonly, nonatomic) struct TSCEFunctor { TSCEFormulaObject *_formula; unsigned char _numArgs; } groupingFunctor;

+ (BOOL)groupingTypeIsAnyDateType:(int)a0;
+ (id)stringForYearType;
+ (id)stringForMonthType;
+ (id)stringForDayOfWeekType;
+ (id)stringForDayType;
+ (id)stringForYearWeekType;
+ (id)stringForYearQuarterType;
+ (id)stringForUniqueType;
+ (id)stringForGroupingType:(int)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct GroupColumnArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; struct FunctorArchive *x5; struct UUID *x6; int x7; } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)encodeToArchive:(struct GroupColumnArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; struct FunctorArchive *x5; struct UUID *x6; int x7; } *)a0 archiver:(id)a1;
- (id)initWithGroupingColumnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 columnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1 groupingType:(int)a2;
- (id)groupValueForValue:(id)a0 calcEngine:(id)a1;
- (void)setFunctorForType;
- (id)initWithColumnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 groupingType:(int)a1;
- (id)p_groupingFormatWithLocale:(id)a0;
- (id)initWithColumnIndex:(struct TSUModelColumnIndex { unsigned short x0; })a0 groupingType:(int)a1 inTableInfo:(id)a2;

@end
