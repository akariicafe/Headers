@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver>

@property (retain, nonatomic) NSString *visibleState;
@property (nonatomic) long long visibleStateSignpost;
@property (nonatomic) BOOL isDisplayingCuratedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateVisibleState;
- (void)_logDidEndViewingState:(id)a0;
- (void)_logDidStartViewingState:(id)a0;
- (void)_updateVisibleState;
- (void)logContentViewDidDisappear;
- (void)logContentViewWillAppear;

@end
