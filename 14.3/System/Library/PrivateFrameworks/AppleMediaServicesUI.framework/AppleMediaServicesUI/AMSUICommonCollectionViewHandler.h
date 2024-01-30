@class NSString, AMSUICommonCollectionView;
@protocol AMSUICommonCollectionViewDelegate;

@interface AMSUICommonCollectionViewHandler : NSObject <UICollectionViewDelegate>

@property (readonly, weak, nonatomic) AMSUICommonCollectionView *collectionView;
@property (weak, nonatomic) id<AMSUICommonCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
