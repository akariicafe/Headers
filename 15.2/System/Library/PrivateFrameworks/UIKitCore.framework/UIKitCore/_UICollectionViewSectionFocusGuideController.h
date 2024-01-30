@class NSUUID, NSMapTable, UICollectionView, NSIndexPath;

@interface _UICollectionViewSectionFocusGuideController : NSObject

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *focusGuideFromSectionMap;
@property (retain, nonatomic) NSMapTable *focusGuideToSectionMap;
@property (retain, nonatomic) NSUUID *lastUpdateIdentifier;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath;
@property (nonatomic) long long pivotSection;

- (id)initWithCollectionView:(id)a0;
- (id)_focusGuides;
- (void)_updatePivotSection;
- (void)_removeSectionFocusGuidesForSection:(long long)a0;
- (id)_createOrUpdateSectionFocusGuidePackageForSection:(long long)a0;
- (id)_sectionFocusGuidePackageForSection:(long long)a0;
- (void)_layoutSectionFocusGuide:(id)a0 forSection:(long long)a1 inLayout:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sectionFrameForSection:(long long)a0 layout:(id)a1;
- (void)_layoutSectionFocusGuide:(id)a0 forSection:(long long)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_updateSectionEndFocusGuideForSection:(long long)a0 inPackage:(id)a1 layout:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sectionEndFrameForSection:(long long)a0 layout:(id)a1;
- (void)performLayout;
- (void).cxx_destruct;
- (void)cleanupSectionFocusGuides;
- (id)_sectionsToLoad;
- (void)updateFocusedIndexPath:(id)a0;
- (void)reloadSectionFocusGuides;

@end
