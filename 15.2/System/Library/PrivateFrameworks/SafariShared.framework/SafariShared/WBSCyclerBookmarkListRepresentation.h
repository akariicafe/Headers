@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration> {
    NSMutableArray *_children;
}

@property (readonly, nonatomic) unsigned long long numberOfChildren;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEquivalent:(id)a0;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)childAtIndex:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 uniqueIdentifier:(id)a1;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)a0;
- (BOOL)_tryToDeleteDescendant:(id)a0;
- (BOOL)containsChild:(id)a0;
- (BOOL)containsDescendant:(id)a0;
- (id)descendantWithUniqueIdentifier:(id)a0;
- (id)allDescendantsPassingTest:(id /* block */)a0;
- (id)randomDescendantPassingTest:(id /* block */)a0;
- (void)deleteChild:(id)a0;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)deleteDescendant:(id)a0;
- (void)deleteAllChildren;
- (id)randomDescendant;
- (id)randomListDescendant;

@end
