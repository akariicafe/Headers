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
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;

- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (BOOL)equalWidth;
- (void)loadFromArchive:(const struct ColumnStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct ColumnStylePropertiesArchive *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ColumnStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct ColumnStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (struct CGSize { double x0; double x1; })adjustedInsetsForTarget:(id)a0;
- (id)layoutMarginsForTarget:(id)a0;

@end
