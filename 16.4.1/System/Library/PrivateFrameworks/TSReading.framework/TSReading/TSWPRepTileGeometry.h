@class NSString;

@interface TSWPRepTileGeometry : NSObject <TSDTileGeometryProviding> {
    struct vector<TSWPRepBoundsAnalyzer::Info, std::allocator<TSWPRepBoundsAnalyzer::Info>> { struct Info *__begin_; struct Info *__end_; struct __compressed_pair<TSWPRepBoundsAnalyzer::Info *, std::allocator<TSWPRepBoundsAnalyzer::Info>> { struct Info *__value_; } __end_cap_; } _infos;
}

@property (nonatomic) struct CGSize { double width; double height; } maxTileSize;
@property (nonatomic) BOOL tileGeometryDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)tileGeometryAddVisibileIndices:(id)a0 withLayer:(id)a1 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)tileGeometryConfigureWithLayer:(id)a0 tileLayer:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tileGeometryCountWithLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tileGeometryRectWithLayer:(id)a0 atIndex:(unsigned long long)a1 mask:(unsigned int *)a2;
- (BOOL)updateWithLayer:(id)a0 scale:(double)a1 columns:(id)a2;

@end
