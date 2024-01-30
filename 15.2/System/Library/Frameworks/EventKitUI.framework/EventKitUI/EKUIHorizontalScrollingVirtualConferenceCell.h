@class NSArray, NSString, UICollectionView;
@protocol VirtualConferenceRoomTypeSelectionDelegate;

@interface EKUIHorizontalScrollingVirtualConferenceCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_items;
}

@property (weak, nonatomic) id<VirtualConferenceRoomTypeSelectionDelegate> delegate;
@property (retain, nonatomic) NSArray *roomTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)_heightOfCells;

@end
