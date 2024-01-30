@class TSDPathManipulation, NSMutableDictionary;

@interface TSDManipulatedStroke : TSDSmartStroke {
    NSMutableDictionary *mArrows;
}

@property (retain, nonatomic) TSDPathManipulation *pathManipulation;
@property (nonatomic) unsigned int randomSeed;

+ (Class)mutableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)strokeLineEnd:(id)a0;
- (const struct CGPath { } *)pathToStrokeFromCGPath:(struct CGPath { } *)a0;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3 parameterized:(BOOL)a4 shouldReverseDrawOrder:(BOOL)a5;
- (BOOL)canApplyToShapeRenderable;
- (double)renderedWidth;
- (BOOL)drawsOutsideStrokeBounds;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (struct CGPath { } *)manipulatePath:(struct CGPath { } *)a0 withLineWidth:(double)a1;
- (id)initWithArchive:(const struct StrokeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct StrokePatternArchive *x5; struct SmartStrokeArchive *x6; struct FrameArchive *x7; struct PatternedStrokeArchive *x8; float x9; int x10; int x11; float x12; } *)a0 unarchiver:(id)a1;
- (void)p_setupDoodlesManipulation;
- (void)seedRandom;
- (void)applyInteriorWrapPropertiesInContext:(struct CGContext { } *)a0 insideStroke:(BOOL)a1;
- (struct CGPath { } *)strokedPath:(struct CGPath { } *)a0 withLineWidth:(double)a1 insideStroke:(BOOL)a2;
- (void)saveToArchive:(struct StrokeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Color *x4; struct StrokePatternArchive *x5; struct SmartStrokeArchive *x6; struct FrameArchive *x7; struct PatternedStrokeArchive *x8; float x9; int x10; int x11; float x12; } *)a0 archiver:(id)a1;

@end
