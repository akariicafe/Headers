@class TSDShapeStyle, TSDPathSource, NSString, TSDFill, TSDLineEnd;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable> {
    TSDShapeStyle *mStyle;
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
}

@property (retain, nonatomic) TSDPathSource *pathSource;
@property (readonly, nonatomic) TSDShapeStyle *shapeStyle;
@property (copy, nonatomic) TSDFill *fill;
@property (retain, nonatomic) TSDLineEnd *headLineEnd;
@property (retain, nonatomic) TSDLineEnd *tailLineEnd;
@property (readonly, nonatomic) BOOL supportsTextInset;
@property (readonly, nonatomic) BOOL supportsShrinkTextToFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForProperty:(int)a0;
- (void)dealloc;
- (int)elementKind;
- (void)setGeometry:(id)a0;
- (Class)layoutClass;
- (id)style;
- (void)setStyle:(id)a0;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (Class)repClass;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2;
- (id)animationFilters;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (void)setValuesForProperties:(id)a0;
- (Class)styleClass;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;

@end
