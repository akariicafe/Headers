@class TSUColor, NSUserDefaults, NSHashTable;

@interface TSKPencilAnnotationUIState : TSPObject {
    NSUserDefaults *_userDefaults;
    unsigned long long _currentToolType;
    NSHashTable *_observers;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolWidth;
    TSUColor *_highlighterToolColor;
    double _highlighterToolOpacity;
    double _highlighterToolWidth;
}

+ (id)strokeWidthsForToolType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)loadFromArchive:(const struct PencilAnnotationUIState { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct Color *x5; int x6; float x7; float x8; float x9; float x10; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct PencilAnnotationUIState { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct Color *x5; int x6; float x7; float x8; float x9; float x10; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 userDefaults:(id)a1;
- (void)p_setupDefaultValues;
- (unsigned long long)p_defaultToolType;
- (void)p_setColor:(id)a0 forToolType:(unsigned long long)a1;
- (void)p_setDefaultToolType:(unsigned long long)a0;
- (unsigned long long)p_toolTypeFromUserDefaultsRepresentation:(long long)a0;
- (long long)p_userDefaultsRepresentationForToolType:(unsigned long long)a0;

@end
