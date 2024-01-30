@class TSUColor;

@interface TSDFreehandDrawingToolkitUIState : TSPObject {
    unsigned long long _mostRecentToolTypeToRestore;
    TSUColor *_penToolColor;
    double _penToolOpacity;
    double _penToolUnscaledWidth;
    TSUColor *_pencilToolColor;
    double _pencilToolOpacity;
    double _pencilToolUnscaledWidth;
    TSUColor *_crayonToolColor;
    double _crayonToolOpacity;
    double _crayonToolUnscaledWidth;
    TSUColor *_fillToolColor;
    double _fillToolOpacity;
    double _eraserToolScaledWidth;
    BOOL _eraserToolErasesWholeObjects;
}

@property (nonatomic) unsigned long long currentToolType;
@property (readonly, nonatomic) unsigned long long mostRecentRestorableToolType;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)loadFromArchive:(const struct FreehandDrawingToolkitUIState { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct Color *x5; struct Color *x6; struct Color *x7; struct Color *x8; int x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; BOOL x18; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct FreehandDrawingToolkitUIState { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct Color *x5; struct Color *x6; struct Color *x7; struct Color *x8; int x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; BOOL x18; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)a0;
- (void)p_setupDefaultValues;
- (unsigned long long)p_defaultToolType;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)a0;
- (id)p_defaultColorForToolType:(unsigned long long)a0;
- (void)p_setColor:(id)a0 forToolType:(unsigned long long)a1;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)a0;
- (BOOL)isEqualToFreehandDrawingToolkitUIState:(id)a0;
- (void)p_setDefaultToolType:(unsigned long long)a0;

@end
