@class NSUUID, NSString, NSArray, UICollectionViewFlowLayout, PXSelectionCoordinator, PHPhotoLibrary, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot, PHFetchResult, PXPeoplePickerDataSourceManager;
@protocol PXPeoplePickerViewControllerActionHandler, PXPeoplePickerConfigurationControllerDelegate;

@interface PXPeoplePickerViewController : UICollectionViewController <PXSectionedDataSourceManagerObserver, UICollectionViewDelegateFlowLayout> {
    UICollectionViewFlowLayout *_layout;
}

@property (copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) PXPeoplePickerDataSourceManager *personDataSourceManager;
@property (readonly, nonatomic) PHPhotoLibrary *library;
@property (readonly, nonatomic) long long dataType;
@property (readonly, copy, nonatomic) NSArray *personLocalIdentifiers;
@property (readonly, copy, nonatomic) NSArray *preselectedLocalIdentifiers;
@property (readonly, copy, nonatomic) NSArray *disabledLocalIdentifiers;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator;
@property (weak, nonatomic) id<PXPeoplePickerViewControllerActionHandler> peoplePickerActionHandler;
@property (weak, nonatomic) id<PXPeoplePickerConfigurationControllerDelegate> configControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_configureCellForCollectionView:(id)a0 cell:(id)a1 indexPath:(id)a2;
- (void)_configureDataSourceManager;
- (void)_facesDidChange:(id)a0;
- (void)_performAction:(long long)a0 forPerson:(id)a1;
- (void)_performAction:(long long)a0 forPersonAtIndexPath:(id)a1;
- (id)_personAtIndexPath:(id)a0;
- (void)_updatePersonDataSource;
- (void)deselectAllPeople;
- (id)initWithPersonIdentifiers:(id)a0 selectedLocalIdentifiers:(id)a1 disabledLocalIdentifiers:(id)a2 prompt:(id)a3 selectionCoordinator:(id)a4 library:(id)a5;

@end
