@class PKPassGroupView, NSString, UIScrollView, NSMutableArray, PKDashboardMessagesView;

@interface PKDashboardPassMessagePresenter : NSObject <PKDashboardMessagesViewDelegate, PKDashboardItemPresenter> {
    PKPassGroupView *_groupView;
    PKDashboardMessagesView *_sampleMessageView;
    NSMutableArray *_tablesViews;
    UIScrollView *_scrollView;
    unsigned long long _currentIndex;
    NSString *_currentIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)itemClass;
- (unsigned long long)_indexForIdentifier:(id)a0 inMessages:(id)a1;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (id)_identifierForItem:(id)a0;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (id)initWithPassGroupView:(id)a0;
- (void)messagesView:(id)a0 scrolledToMessageWithIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
