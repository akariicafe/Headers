@class TSSStylePropertyChangeSet, TSSStyle;

@interface TSWPStyleDiff : TSSStyleDiff {
    BOOL _definedChangeSet;
    BOOL _definedStyle;
}

@property (retain, nonatomic) TSSStylePropertyChangeSet *previouslyAppliedChangeSet;
@property (retain, nonatomic) TSSStylePropertyChangeSet *changeSet;
@property (retain, nonatomic) TSSStyle *style;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 style:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)didInitFromSOS;
- (void)loadFromArchive:(const struct StyleDiffArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct CharacterStylePropertyChangeSetArchive *x5; struct ParagraphStylePropertyChangeSetArchive *x6; struct ShapeStylePropertyChangeSetArchive *x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct StyleDiffArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct CharacterStylePropertyChangeSetArchive *x5; struct ParagraphStylePropertyChangeSetArchive *x6; struct ShapeStylePropertyChangeSetArchive *x7; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 changeSet:(id)a1;
- (BOOL)isEqualToStyleDiff:(id)a0;
- (id)styleDiffForTable:(unsigned long long)a0 storage:(id)a1 currentObject:(id)a2;
- (id)changedPropertyNames:(id)a0;

@end
