@class NSString, TSCHChartMediator;

@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider>

@property (readonly, retain, nonatomic) TSCHChartMediator *mediator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)saveToArchive:(struct ChartMediatorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct Reference *x6; } *)a0;
- (void)loadFromArchive:(const struct ChartMediatorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct Reference *x6; } *)a0;
- (id)initWithContext:(id)a0 andMediator:(id)a1;

@end
