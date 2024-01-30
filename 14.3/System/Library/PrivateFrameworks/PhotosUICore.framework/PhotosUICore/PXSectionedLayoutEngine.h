@class NSString, PXSectionedLayoutContent;
@protocol PXSectionedLayoutItem, PXSectionedLayoutEngineDelegate;

@interface PXSectionedLayoutEngine : PXLayoutEngine <PXMutableSectionedLayoutEngine> {
    PXSectionedLayoutContent *_layoutContent;
    struct { BOOL willGenerateLayoutForSection; } _delegateRespondsTo;
    BOOL _needsUpdateSeedItem;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_geometryBuffer;
    unsigned long long _geometryBufferCount;
}

@property (readonly, nonatomic) long long axis;
@property (readonly, nonatomic) id<PXSectionedLayoutItem> seedItem;
@property (readonly, nonatomic) struct CGSize { double width; double height; } seedSize;
@property (weak, nonatomic) id<PXSectionedLayoutEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataSourceSnapshot:(id)a0 withChangeDetails:(id)a1;
- (void)setSeedItem:(id)a0;
- (id)initWithLayoutGenerator:(id)a0 dataSourceSnapshot:(id)a1;
- (id)performChangesAndWait:(id /* block */)a0;
- (BOOL)canComputeLayoutSnapshot;
- (void)updateLayoutDataWithChangeDetails:(id)a0;
- (id)computeLayoutSnapshot;
- (void)performChanges:(id /* block */)a0;
- (void)setDelegate:(id)a0;
- (void)setSeedSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resetLayoutData;
- (id)_newLayoutSection;
- (id)initWithAxis:(long long)a0 layoutGenerator:(id)a1 dataSourceSnapshot:(id)a2;
- (id)initWithAxis:(long long)a0 layoutGenerator:(id)a1 dataSourceSnapshot:(id)a2 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)_updateLayoutDataWithChangeDetails:(id)a0;
- (id)_newLayoutSnapshot;
- (BOOL)_computeSectionsIfNeeded;
- (void)_computeSection:(id)a0;
- (id)_computeSectionsFromSection:(id)a0 itemIndex:(long long)a1 kind:(long long)a2;
- (void)_prepareGeometryBufferForCount:(unsigned long long)a0;
- (id)_emptyLayoutSnapshot;

@end
