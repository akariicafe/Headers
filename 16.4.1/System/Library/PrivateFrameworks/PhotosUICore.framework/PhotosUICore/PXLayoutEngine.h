@class NSString, PXLayoutSnapshot, PXLayoutGenerator, NSObject;
@protocol PXLayoutEngineDelegate, PXLayoutDataSourceChangeDetails, PXLayoutItem, OS_dispatch_queue, PXLayoutEngineDataSourceSnapshot;

@interface PXLayoutEngine : NSObject <PXMutableLayoutEngine> {
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    struct { BOOL layoutData; BOOL layoutSnapshot; } _needsUpdateFlags;
}

@property (retain, nonatomic) id<PXLayoutDataSourceChangeDetails> changeDetails;
@property (retain, nonatomic) PXLayoutGenerator *layoutGenerator;
@property (retain, nonatomic) PXLayoutSnapshot *layoutSnapshot;
@property (weak, nonatomic) id<PXLayoutEngineDelegate> delegate;
@property (readonly, nonatomic) id<PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot;
@property (readonly, nonatomic) id<PXLayoutItem> seedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)setDataSourceSnapshot:(id)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)init;
- (void)invalidateLayoutData;
- (void)_publishChanges;
- (void).cxx_destruct;
- (id)performChangesAndWait:(id /* block */)a0;
- (void)_updateLayoutDataIfNeeded;
- (void)_updateLayoutSnapshotIfNeeded;
- (BOOL)canComputeLayoutSnapshot;
- (id)computeLayoutSnapshot;
- (id)initWithLayoutGenerator:(id)a0 dataSourceSnapshot:(id)a1;
- (void)invalidateLayoutSnapshot;
- (void)setDataSourceSnapshot:(id)a0 withChangeDetails:(id)a1;
- (void)setSeedItem:(id)a0;
- (void)updateLayoutDataWithChangeDetails:(id)a0;

@end
