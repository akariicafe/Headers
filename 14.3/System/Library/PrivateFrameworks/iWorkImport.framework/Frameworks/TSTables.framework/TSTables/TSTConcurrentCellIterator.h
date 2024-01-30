@class TSTTableInfo, TSTCellRegion, NSPointerArray;

@interface TSTConcurrentCellIterator : NSObject

@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (retain, nonatomic) TSTCellRegion *region;
@property (retain, nonatomic) TSTCellRegion *forcingRegion;
@property (retain, nonatomic) NSPointerArray *arrayOfChunkRocks;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long searchFlags;
@property (nonatomic) struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } _rect; } clampingViewRect;
@property (nonatomic) unsigned long long cellsPerSubRegion;

- (void).cxx_destruct;
- (id)initWithTableInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchFlags:(unsigned long long)a3;
- (void)enumerateConcurrentlyUsingChunkBeginBlock:(id /* block */)a0 concurrentBlock:(id /* block */)a1 finalBlock:(id /* block */)a2;
- (id)initWithTableInfo:(id)a0 flags:(unsigned long long)a1 searchFlags:(unsigned long long)a2;
- (id)initWithTableInfo:(id)a0 region:(id)a1 forcingRegion:(id)a2 clampingViewRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a3 flags:(unsigned long long)a4 searchFlags:(unsigned long long)a5;
- (void)enumerateConcurrentlyUsingChunkBeginBlock:(id /* block */)a0 perDispatchThreadBlock:(id /* block */)a1 concurrentBlock:(id /* block */)a2 finalBlock:(id /* block */)a3;
- (id)initWithTableInfo:(id)a0 region:(id)a1 clampingViewRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a2 flags:(unsigned long long)a3 searchFlags:(unsigned long long)a4;
- (id)initWithTableInfo:(id)a0 region:(id)a1 forcingRegion:(id)a2 flags:(unsigned long long)a3 searchFlags:(unsigned long long)a4;

@end
