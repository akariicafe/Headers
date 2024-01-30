@class NSString, MKMapItem, NSArray;
@protocol _MKInfoCardAnalyticsDelegate, MKPlaceRelatedViewControllerDelegate;

@interface MKPlaceRelatedViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    NSArray *_fetchedMapItems;
    NSArray *_cells;
    BOOL _isExpanded;
}

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKPlaceRelatedViewControllerDelegate> delegate;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTitle;
- (void).cxx_destruct;
- (void)fetchPOIs;
- (unsigned long long)maxItems;
- (void)_reloadRelatedMapItems:(id)a0;
- (id)_moduleTitle;
- (void)_seeAllAction:(id)a0;
- (void)_captureSeeAllAction;
- (void)_captureTapActionWithMapItem:(id)a0;
- (void)preferredContentSizeChanged:(id)a0;
- (void)_updateHeightConstraints;
- (id)initWithMapItem:(id)a0;
- (void)_setExpanded:(BOOL)a0;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)_canShowWhileLocked;
- (void)_updateRows;
- (void)viewDidLoad;

@end
