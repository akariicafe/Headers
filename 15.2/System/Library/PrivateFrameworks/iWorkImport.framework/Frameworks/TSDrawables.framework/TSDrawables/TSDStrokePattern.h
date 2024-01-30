@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    double _pattern[6];
}

@property (readonly, nonatomic) long long patternType;
@property (readonly, nonatomic) double *pattern;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double phase;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isRoundDash;

+ (id)strokePatternWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;
+ (id)emptyPattern;
+ (id)solidPattern;
+ (id)shortDashPattern;
+ (id)mediumDashPattern;
+ (id)longDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)a0;
+ (id)dashPatternWithSpacing:(double)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithPatternType:(long long)a0 pattern:(const double *)a1 count:(unsigned long long)a2 phase:(double)a3;
- (id)initWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;
- (id)p_patternString;
- (id)p_typeString;
- (void)i_applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1 capStyle:(unsigned long long *)a2;
- (void)applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1;
- (double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)a0 withinAvailableLength:(double)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
