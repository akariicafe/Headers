@class INIntent, NSArray, WFAction, UICollectionView, NSString, UIViewController;
@protocol WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate;

@interface WFActionDrawerSiriSuggestionsCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, MPMediaPickerControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

@property (copy, nonatomic) NSArray *donations;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WFAction *genericAction;
@property (retain, nonatomic) INIntent *genericIntent;
@property (copy, nonatomic) NSString *genericActionParameterTitle;
@property (weak, nonatomic) id<WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (nonatomic) BOOL configuredForDailyRoutines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)mediaPicker:(id)a0 didPickMediaItems:(id)a1;
- (id)initWithCollectionView:(id)a0 cellType:(long long)a1 donations:(id)a2 actions:(id)a3;
- (void)showMusicPicker;
- (void)showPodcastPicker;
- (void)_configureCell:(id)a0 withDonation:(id)a1 cellType:(long long)a2;
- (void)_configureCell:(id)a0 withGenericIntent:(id)a1 cellType:(long long)a2 genericParameterTitle:(id)a3;

@end
