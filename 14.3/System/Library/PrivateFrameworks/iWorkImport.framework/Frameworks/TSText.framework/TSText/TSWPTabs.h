@class NSMutableArray;

@interface TSWPTabs : NSObject <TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing> {
    NSMutableArray *_tabs;
}

+ (id)tabs;
+ (id)instanceWithArchive:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)tabAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertTab:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithArchive:(const struct TabsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSWP::TabArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;
- (id)initWithTabs:(id)a0;
- (id)tabAtPosition:(double)a0;
- (id)tabAfterPosition:(double)a0;
- (void)removeTabAtIndex:(unsigned long long)a0;
- (void)setPosition:(double)a0 forTab:(id)a1;
- (unsigned long long)indexForTabWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (void)saveToArchive:(struct TabsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSWP::TabArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
