@class TSDPathManipulation, NSMutableDictionary;

@interface TSDManipulatedStroke : TSDSmartStroke {
    NSMutableDictionary *mArrows;
}

@property (retain, nonatomic) TSDPathManipulation *pathManipulation;
@property (nonatomic) unsigned int randomSeed;

+ (Class)mutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)strokeLineEnd:(id)a0;
- (const struct CGPath { } *)pathToStrokeFromCGPath:(struct CGPath { } *)a0;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3 parameterized:(BOOL)a4 shouldReverseDrawOrder:(BOOL)a5;
- (BOOL)canApplyToShapeRenderable;
- (double)renderedWidth;
- (BOOL)drawsOutsideStrokeBounds;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (struct CGPath { } *)manipulatePath:(struct CGPath { } *)a0 withLineWidth:(double)a1;
- (void)p_setupDoodlesManipulation;
- (void)seedRandom;
- (void)applyInteriorWrapPropertiesInContext:(struct CGContext { } *)a0 insideStroke:(BOOL)a1;
- (struct CGPath { } *)strokedPath:(struct CGPath { } *)a0 withLineWidth:(double)a1 insideStroke:(BOOL)a2;

@end
