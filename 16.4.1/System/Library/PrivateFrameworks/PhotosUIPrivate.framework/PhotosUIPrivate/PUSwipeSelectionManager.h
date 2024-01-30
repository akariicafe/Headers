@class PUPhotoSelectionManager, NSMutableDictionary, NSIndexPath, PXUIAutoScroller;
@protocol PUSwipeSelectionManagerDelegate, PUSwipeSelectionManagerDataSource;

@interface PUSwipeSelectionManager : NSObject {
    NSMutableDictionary *_oldIndexesPaths;
}

@property (nonatomic, setter=_setSelectionMode:) long long _selectionMode;
@property (copy, nonatomic, setter=_setStartingIndexPath:) NSIndexPath *_startingIndexPath;
@property (retain, nonatomic, setter=_setRestorePhotoSelectionManager:) PUPhotoSelectionManager *_restorePhotoSelectionManager;
@property (retain, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken;
@property (weak, nonatomic) id<PUSwipeSelectionManagerDelegate> delegate;
@property (weak, nonatomic) id<PUSwipeSelectionManagerDataSource> datasource;
@property (retain, nonatomic) PXUIAutoScroller *selectionAutoScroller;
@property (nonatomic) struct CGPoint { double x; double y; } screenTouchLocation;

- (void)endSelection;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_indexesPathsRangeForIndexPath:(id)a0;
- (long long)_selectionModeForRestoringStateOfIndexPath:(id)a0;
- (void)beginSelectionFromIndexPath:(id)a0;
- (id)initWithSelectionMode:(long long)a0 photoSelectionManager:(id)a1;
- (void)updateSelectionWithCurrentIndexPath:(id)a0 leftClosestIndexPath:(id)a1 aboveClosestIndexPath:(id)a2;

@end
