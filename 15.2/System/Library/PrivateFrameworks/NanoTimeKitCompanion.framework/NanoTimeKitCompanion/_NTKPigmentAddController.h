@class NTKPigmentEditOptionArray, NSString, UICollectionView, NTKFace, NSArray, NTKFaceView;

@interface _NTKPigmentAddController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    NTKFace *_face;
    NTKFaceView *_faceView;
    NSString *_slot;
    id /* block */ _completionHandler;
    UICollectionView *_collectionView;
    NSArray *_sections;
    NTKPigmentEditOptionArray *_availablePigments;
    NTKPigmentEditOptionArray *_addedPigments;
    NTKPigmentEditOptionArray *_removedPigments;
    BOOL _shouldSavePigmentChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView;
- (void).cxx_destruct;
- (id)_collectionViewLayout;
- (void)_dismiss;
- (void)viewDidAppear:(BOOL)a0;
- (void)_donePressed;
- (id)initWithFace:(id)a0 faceView:(id)a1 slot:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setupPigments;
- (void)_handleOptionsChangedNotification;
- (void)_updateSelections;
- (id)_pigmentForIndexPath:(id)a0;

@end
