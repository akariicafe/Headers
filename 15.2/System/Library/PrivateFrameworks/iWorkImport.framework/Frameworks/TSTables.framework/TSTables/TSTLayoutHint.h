@class NSNumber, TSTLayout, NSString;
@protocol TSDHint;

@interface TSTLayoutHint : NSObject <NSCopying, TSDHint>

@property (class, readonly, nonatomic) Class archivedHintClass;

@property (nonatomic) BOOL isValid;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } cellRange;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } cacheHintID;
@property (retain, nonatomic) NSNumber *partitioningPass;
@property (nonatomic) unsigned int partitionPosition;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) struct CGSize { double width; double height; } effectiveSize;
@property (weak, nonatomic) TSTLayout *layout;
@property (nonatomic) BOOL horizontal;
@property (readonly, nonatomic) id<TSDHint> firstChildHint;
@property (readonly, nonatomic) id<TSDHint> lastChildHint;
@property (readonly, nonatomic) BOOL isFirstHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)saveToArchive:(void *)a0;
- (id)copyForArchiving;
- (id)initWithRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 hintId:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 partitionPosition:(unsigned int)a2 maximumSize:(struct CGSize { double x0; double x1; })a3 effectiveSize:(struct CGSize { double x0; double x1; })a4 layout:(id)a5 validity:(BOOL)a6 horizontal:(BOOL)a7;
- (BOOL)overlapsWithSelectionPath:(id)a0;

@end
