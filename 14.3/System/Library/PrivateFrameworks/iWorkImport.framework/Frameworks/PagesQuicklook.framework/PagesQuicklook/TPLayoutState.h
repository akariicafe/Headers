@class NSArray, NSSet;

@interface TPLayoutState : NSObject <NSCopying>

@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long sectionPageIndex;
@property (nonatomic) unsigned long long documentPageIndex;
@property (nonatomic) unsigned long long lastPageCount;
@property (copy, nonatomic) NSArray *sectionHints;
@property (nonatomic) unsigned long long bodyLength;
@property (copy, nonatomic) NSSet *missingFonts;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct LayoutStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::SectionHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct LayoutStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::SectionHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; } *)a0 archiver:(id)a1 context:(id)a2;
- (id)archivedLayoutStateInContext:(id)a0;
- (BOOL)isEqualToLayoutState:(id)a0;

@end
