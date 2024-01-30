@class NSString, NSArray, PUPhotoSelectionManager, NSObject;
@protocol OS_dispatch_queue, PUPhotosGridBarsHelperDelegate;

@interface PUPhotosGridBarsHelper : NSObject <PUPhotoSelectionManagerChangeObserver> {
    BOOL _isPerformingUpdates;
    struct { BOOL photoSelectionManager; BOOL shouldUpdateBarItemsLazily; BOOL barItems; } _needsUpdateFlags;
}

@property (retain, nonatomic, setter=_setTitle:) NSString *title;
@property (retain, nonatomic, setter=_setPrompt:) NSString *prompt;
@property (nonatomic, setter=_setShouldHideBackButton:) BOOL shouldHideBackButton;
@property (retain, nonatomic, setter=_setLeftBarButtonItems:) NSArray *leftBarButtonItems;
@property (retain, nonatomic, setter=_setRightBarButtonItems:) NSArray *rightBarButtonItems;
@property (retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *_photoSelectionManager;
@property (nonatomic, setter=_setShouldUpdateBarItemsLazily:) BOOL _shouldUpdateBarItemsLazily;
@property (nonatomic, getter=_isUpdatingItemsWithCount, setter=_setUpdatingItemsWithCount:) BOOL _updatingItemsWithCount;
@property (nonatomic, setter=_setShouldUpdateItemsWithCount:) BOOL _shouldUpdateItemsWithCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, setter=_setHadSelectionOnLastUpdate:) BOOL _hadSelectionOnLastUpdate;
@property (weak, nonatomic) id<PUPhotosGridBarsHelperDelegate> delegate;
@property (nonatomic, getter=isSwipeSelecting) BOOL swipeSelecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)photoSelectionManagerSelectionDidChange:(id)a0;
- (void)invalidateNavigationBarItems;
- (void)_notifyBarItemsDidChange;
- (void)_invalidatePhotoSelectionManager;
- (void)_updatePhotoSelectionManagerIfNeeded;
- (void)_invalidateShouldUpdateBarItemsLazily;
- (void)_updateShouldUpdateBarItemsLazilyIfNeeded;
- (void)_invalidateBarItems;
- (void)_updateBarItemsIfNeeded;
- (void)_updateAllBarItems;
- (void)_startUpdatingItemsWithCountIfNeeded;
- (void)_stopUpdatingItemsWithCount;
- (void)_updateItemsWithCountInBackgroundWithDelegate:(id)a0 photoSelectionManagerSnapshot:(id)a1;
- (void)_handleItemsWithCountUpdateWithTitle:(id)a0 shouldReloadAllItems:(BOOL)a1;

@end
