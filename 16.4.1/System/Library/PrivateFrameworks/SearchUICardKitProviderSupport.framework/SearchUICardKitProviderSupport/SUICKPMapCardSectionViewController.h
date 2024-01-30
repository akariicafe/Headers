@class CRKContainerCardSectionView, NSString, UIView;
@protocol CRKCardSectionView;

@interface SUICKPMapCardSectionViewController : SUICKPInteractiveCardSectionViewController <SearchUIFeedbackDelegate> {
    BOOL _needsToLoadCardSectionView;
    BOOL _inTrackingRunLoopMode;
    UIView<CRKCardSectionView> *_mapSectionView;
    struct __CFRunLoopObserver { } *_mainRunLoopObserverRef;
}

@property (retain, nonatomic) CRKContainerCardSectionView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardSectionClasses;

- (void)didEngageCardSection:(id)a0;
- (void)_updateContentSize;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_mapCardSection;
- (void)_loadCardSectionView;
- (id)_initWithCardSection:(id)a0;
- (BOOL)_shouldAttemptToSnapshotMapView;
- (void)_loadCardSectionViewIfNeeded;
- (void)_loadMapCardSectionView;
- (void)_snapshotCardSectionView;
- (id)_viewSnapshot;

@end
