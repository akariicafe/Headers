@class NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, WFGlyphPickerTabBar, UISegmentedControl;
@protocol WFGlyphPickerDelegate;

@interface WFGlyphPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WFGlyphPickerTabBarDelegate>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *glyphSections;
@property (nonatomic) long long control;
@property (weak, nonatomic) WFGlyphPickerTabBar *tabBar;
@property (nonatomic) BOOL useOutlineGlyphsOnly;
@property (nonatomic) long long lastEvent;
@property (weak, nonatomic) id<WFGlyphPickerDelegate> delegate;
@property (nonatomic) unsigned short selectedGlyphCharacter;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) double glyphDimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)numberOfSections;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (unsigned short)glyphCharacterAtIndexPath:(id)a0;
- (void)glyphPickerTabBar:(id)a0 didSelectTabAtIndex:(unsigned long long)a1;
- (id)indexPathForGlyphCharacter:(unsigned short)a0;
- (id)initWithControl:(long long)a0 glyphDimension:(double)a1 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)initWithControl:(long long)a0 glyphDimension:(double)a1 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 useSystemGlyphsOnly:(BOOL)a3 useOutlineGlyphsOnly:(BOOL)a4;
- (void)pickedSegment:(id)a0;
- (void)scrollToSection:(long long)a0;

@end
