@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver>

@property (retain, nonatomic) NSString *visibleState;
@property (nonatomic) long long visibleStateSignpost;
@property (nonatomic) BOOL isDisplayingCuratedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)logContentViewWillAppear;
- (void)logContentViewDidDisappear;
- (void)_invalidateVisibleState;
- (void)_updateVisibleState;
- (void)_logDidStartViewingState:(id)a0;
- (void)_logDidEndViewingState:(id)a0;

@end
