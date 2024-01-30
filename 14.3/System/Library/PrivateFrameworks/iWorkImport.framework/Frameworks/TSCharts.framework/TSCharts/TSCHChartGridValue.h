@interface TSCHChartGridValue : NSObject

+ (id)durationValueWithDouble:(double)a0;
+ (id)numberValueWithDouble:(double)a0;
+ (id)dateValueWithNSDate:(id)a0;
+ (id)dateValueWithDouble:(double)a0;
+ (id)NSDateFromGridValue:(id)a0;
+ (id)NSDateConvertedFromGridValue:(id)a0;
+ (id)instanceWithArchive:(const struct GridValue { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; double x4; double x5; double x6; double x7; } *)a0;
+ (void)saveGridValue:(id)a0 toArchive:(struct GridValue { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; double x4; double x5; double x6; double x7; } *)a1;

- (id)initWithArchive:(const struct GridValue { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; double x4; double x5; double x6; double x7; } *)a0;

@end
