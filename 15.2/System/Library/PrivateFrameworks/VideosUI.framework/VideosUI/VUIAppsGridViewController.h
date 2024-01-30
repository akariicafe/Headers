@class NSArray, NSString, UICollectionView, UILabel, UICollectionViewFlowLayout;

@interface VUIAppsGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate> {
    UILabel *_titleLabel;
    UICollectionViewFlowLayout *_layout;
    UICollectionView *_collectionView;
}

@property (copy, nonatomic) NSArray *apps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (Class)_collectionViewClass;

@end
