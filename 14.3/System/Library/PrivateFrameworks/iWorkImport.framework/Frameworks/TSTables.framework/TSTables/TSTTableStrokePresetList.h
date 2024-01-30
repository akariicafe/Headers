@class TSTTableStrokePresetData;

@interface TSTTableStrokePresetList : NSObject {
    unsigned long long mCount;
    TSTTableStrokePresetData *mPresets[15];
}

+ (id)init;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)a0 verticalStroke:(id)a1 exteriorStroke:(id)a2;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)a0 andThinStroke:(id)a1;
+ (id)instanceWithArchive:(const struct StrokePresetListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::Deprecated_StrokePresetDataArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TST::StrokePresetDataArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; int x6; } *)a0 unarchiver:(id)a1;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetID:(unsigned long long)a0 colors:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)initWithArchive:(const struct StrokePresetListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::Deprecated_StrokePresetDataArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TST::StrokePresetDataArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; int x6; } *)a0 unarchiver:(id)a1;
- (void)setStrokePreset:(id)a0 atIndex:(unsigned long long)a1;
- (id)presetAtIndex:(unsigned long long)a0;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (void)setStroke:(id)a0 forPresetIndex:(unsigned long long)a1;
- (void)saveToArchive:(struct StrokePresetListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::Deprecated_StrokePresetDataArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TST::StrokePresetDataArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; int x6; } *)a0 archiver:(id)a1;
- (unsigned int)maskForStrokePresets:(id)a0;

@end
