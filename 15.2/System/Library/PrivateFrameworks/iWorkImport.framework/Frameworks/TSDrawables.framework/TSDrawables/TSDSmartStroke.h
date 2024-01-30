@class NSString;

@interface TSDSmartStroke : TSDStroke {
    NSString *mStrokeName;
}

@property (readonly, copy, nonatomic) NSString *strokeName;
@property (readonly, nonatomic) double deprecatedPatternOffsetDistance;

+ (id)strokeWithName:(id)a0 color:(id)a1 width:(double)a2;
+ (Class)classForName:(id)a0;
+ (id)p_mapOfStrokeNamesToAlternatesForOldVersions;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)canApplyDirectlyToRepRenderable;
- (BOOL)shouldAntialiasDefeat;
- (BOOL)canDrawWithOtherStroke:(id)a0;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)i_setStrokeName:(id)a0;
- (void)i_setDeprecatedPatternOffsetDistance:(double)a0;

@end
