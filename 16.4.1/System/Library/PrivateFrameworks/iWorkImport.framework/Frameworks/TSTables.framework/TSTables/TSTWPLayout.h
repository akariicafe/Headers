@class TSWPParagraphStyle, TSWPPadding, TSTCellStyle;

@interface TSTWPLayout : TSWPLayout

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } cachedCellID;
@property (retain, nonatomic) TSTCellStyle *cachedCellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *cachedTextStyle;
@property (nonatomic) BOOL cachedCellWraps;
@property (nonatomic) int cachedVerticalAlignment;
@property (nonatomic) long long cachedParagraphAlignment;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } cachedMergeRange;
@property (nonatomic) unsigned long long cachedAutoSizeFlags;
@property (retain, nonatomic) TSWPPadding *cachedPadding;
@property (nonatomic) BOOL cacheIsValid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedMaskRect;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } cachedMaskSpillRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedAutosizedFrame;

- (void)validate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)invalidateSize;
- (BOOL)invalidateForPageCountChange;
- (void)invalidatePosition;
- (Class)repClassOverride;
- (BOOL)isDynamicallyChangingAvailableSpaceForContainedChild;
- (id)initWithStorage:(id)a0 cellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
