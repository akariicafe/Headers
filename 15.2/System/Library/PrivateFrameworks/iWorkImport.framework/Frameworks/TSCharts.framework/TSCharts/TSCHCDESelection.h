@class TSCHChartDrawableInfo;

@interface TSCHCDESelection : TSKSelection

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rowRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } columnRange;

+ (Class)archivedSelectionClass;
+ (id)selectionWithChartInfo:(id)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
