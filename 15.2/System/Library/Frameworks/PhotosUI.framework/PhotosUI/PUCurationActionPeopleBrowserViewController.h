@class PUCurationTraitContainer, NSMutableDictionary, PUCurationActionAssetBrowserViewController;

@interface PUCurationActionPeopleBrowserViewController : PXPeopleDetailSettingsViewController

@property (retain, nonatomic) PUCurationTraitContainer *traitContainer;
@property (retain, nonatomic) PUCurationActionAssetBrowserViewController *assetBrowserViewController;
@property (retain, nonatomic) NSMutableDictionary *facesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithTraitContainer:(id)a0;

@end
