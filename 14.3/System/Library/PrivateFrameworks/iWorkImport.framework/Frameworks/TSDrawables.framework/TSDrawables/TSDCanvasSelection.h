@class TSDInfoCollectionSelectionHelper, NSSet, NSString;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>

@property (retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper;
@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSString *subclassDescription;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsKindOfClass:(Class)a0;
- (BOOL)containsUnlockedKindOfClass:(Class)a0;
- (id)infosOfClass:(Class)a0;
- (id)initWithInfos:(id)a0;
- (id)initWithArchive:(const struct CanvasSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Reference *x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CanvasSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Reference *x6; } *)a0 archiver:(id)a1;
- (id)UUIDDescription;
- (id)initWithInteractiveInfos:(id)a0 nonInteractiveInfos:(id)a1;

@end
