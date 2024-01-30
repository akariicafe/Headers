@class NSString;

@interface TSCHChartUIState : NSObject <NSCopying, TSKUIState>

@property (readonly, nonatomic) unsigned long long lastRowSelectedInCDE;
@property (readonly, nonatomic) unsigned long long lastRowCountInCDE;
@property (readonly, nonatomic) unsigned long long lastColSelectedInCDE;
@property (readonly, nonatomic) unsigned long long lastColCountInCDE;
@property (readonly, nonatomic) unsigned long long multiDataSetIndex;
@property (readonly, nonatomic) BOOL useFullKeyboard;
@property (readonly, nonatomic) BOOL isValidMultiDataSetIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ChartUIState { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Reference *x5; int x6; int x7; int x8; int x9; int x10; BOOL x11; BOOL x12; } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct ChartUIState { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Reference *x5; int x6; int x7; int x8; int x9; int x10; BOOL x11; BOOL x12; } *)a0;
- (void)resetForInitialViewing;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useFullKeyboard:(BOOL)a2 multiDataSetIndex:(unsigned long long)a3;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useFullKeyboard:(BOOL)a2 multiDataSetIndex:(unsigned long long)a3 validIndex:(BOOL)a4;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useFullKeyboard:(BOOL)a2;

@end
