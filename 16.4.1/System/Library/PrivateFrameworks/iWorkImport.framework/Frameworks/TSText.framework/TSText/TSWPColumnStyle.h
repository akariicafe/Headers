@class TSWPPadding;

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>

@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;

- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (BOOL)equalWidth;
- (void)saveToArchiver:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (id)layoutMarginsForTarget:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
