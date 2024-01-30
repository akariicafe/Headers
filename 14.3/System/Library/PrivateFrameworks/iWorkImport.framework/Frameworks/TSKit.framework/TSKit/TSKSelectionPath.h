@class NSArray, NSString;

@interface TSKSelectionPath : NSObject {
    NSArray *_currentSelection;
}

@property (readonly, nonatomic) NSArray *orderedSelections;
@property (readonly, nonatomic) NSString *UUIDDescription;

+ (id)selectionPathWithSelectionArray:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct SelectionPathArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;
- (id)mostSpecificSelectionOfClass:(Class)a0;
- (void)saveToArchive:(struct SelectionPathArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1 context:(id)a2;
- (id)selectionPathPoppingOffSelection:(id)a0;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)a0 withSelection:(id)a1;
- (id)selectionAtIndex:(unsigned long long)a0;
- (id)initWithSelectionArray:(id)a0;
- (id)selectionPathWithAppendedSelections:(id)a0;
- (unsigned long long)indexForSelection:(id)a0;
- (id)selectionPathWithAppendedSelection:(id)a0;
- (id)selectionPathPoppingToSelection:(id)a0;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)a0;
- (id)mostSpecificSelectionConformingToProtocol:(id)a0;
- (id)leastSpecificSelectionOfClass:(Class)a0;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(id /* block */)a0;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(id /* block */)a0;

@end
