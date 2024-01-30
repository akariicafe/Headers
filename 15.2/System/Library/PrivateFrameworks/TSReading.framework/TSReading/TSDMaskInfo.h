@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing>

@property (retain, nonatomic) TSDPathSource *pathSource;

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (Class)repClass;
- (void)setGeometry:(id)a0;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithContext:(id)a0 geometry:(id)a1 pathSource:(id)a2;

@end
