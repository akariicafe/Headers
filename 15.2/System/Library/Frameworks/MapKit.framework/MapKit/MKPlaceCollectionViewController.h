@class MKPlaceSectionHeaderView, NSString, NSDictionary, NSMutableDictionary;
@protocol MKCollectionViewProvider;

@interface MKPlaceCollectionViewController : MKPlaceSectionViewController <MKPlaceSectionViewDelegate, MKModuleViewControllerProtocol> {
    NSDictionary *_collectionViews;
    NSMutableDictionary *_sectionsViews;
    MKPlaceSectionHeaderView *_headerView;
    BOOL _shouldReloadCollection;
}

@property (weak, nonatomic) id<MKCollectionViewProvider> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)reloadCollectionsAnimated:(BOOL)a0;
- (void)sectionView:(id)a0 didSelectHeader:(id)a1;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)sectionView:(id)a0 didDeselectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)sectionView:(id)a0 didSelectFooter:(id)a1;

@end
