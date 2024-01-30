@class NSUUID, NSMapTable, UICollectionView, NSIndexPath;

@interface _UICollectionViewSectionFocusGuideController : NSObject

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMapTable *focusGuideFromSectionMap;
@property (retain, nonatomic) NSMapTable *focusGuideToSectionMap;
@property (retain, nonatomic) NSUUID *lastUpdateIdentifier;
@property (retain, nonatomic) NSIndexPath *focusedIndexPath;
@property (nonatomic) long long pivotSection;

- (id)_sectionFocusGuidePackageForSection:(long long)a0;
- (void)_layoutSectionFocusGuide:(id)a0 forSection:(long long)a1 inLayout:(id)a2;
- (void)_layoutSectionFocusGuide:(id)a0 forSection:(long long)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_focusGuides;
- (id)initWithCollectionView:(id)a0;
- (id)_sectionsToLoad;
- (void)_removeSectionFocusGuidesForSection:(long long)a0;
- (void)updateFocusedIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sectionEndFrameForSection:(long long)a0 layout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sectionFrameForSection:(long long)a0 layout:(id)a1;
- (void)reloadSectionFocusGuides;
- (void)_updatePivotSection;
- (void)_updateSectionEndFocusGuideForSection:(long long)a0 inPackage:(id)a1 layout:(id)a2;
- (void)cleanupSectionFocusGuides;
- (id)_createOrUpdateSectionFocusGuidePackageForSection:(long long)a0;
- (void).cxx_destruct;
- (void)performLayout;

@end
