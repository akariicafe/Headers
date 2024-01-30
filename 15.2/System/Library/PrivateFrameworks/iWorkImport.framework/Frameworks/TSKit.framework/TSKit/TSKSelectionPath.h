@class NSArray, NSString;

@interface TSKSelectionPath : NSObject {
    NSArray *_currentSelection;
}

@property (readonly, nonatomic) NSArray *orderedSelections;
@property (readonly, nonatomic) NSString *UUIDDescription;

+ (id)selectionPathWithSelectionArray:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)mostSpecificSelectionOfClass:(Class)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)a0 withSelection:(id)a1;
- (id)selectionPathPoppingOffSelection:(id)a0;
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
