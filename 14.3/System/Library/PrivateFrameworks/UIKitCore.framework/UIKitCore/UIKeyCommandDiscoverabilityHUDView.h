@class UIView, NSString, UIKeyCommandDiscoverabilityHUDVisualStyle, NSArray, UIBlurEffect, UICollectionViewFlowLayout, UIPageControl, NSLayoutConstraint, UIVisualEffectView, UICollectionView, UIVibrancyEffect;

@interface UIKeyCommandDiscoverabilityHUDView : UIView <UIKeyCommandDiscoverabilityHUDColumnViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    NSArray *_keyCommands;
    UIView *_HUDOutlineView;
    NSLayoutConstraint *_HUDOutlineViewWidthConstraint;
    NSLayoutConstraint *_HUDOutlineViewHeightConstraint;
    UIBlurEffect *_blurEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_backdropView;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewTopConstraint;
    NSLayoutConstraint *_collectionViewBottomConstraint;
    NSLayoutConstraint *_collectionViewLeadingConstraint;
    NSLayoutConstraint *_collectionViewTrailingConstraint;
    UIPageControl *_pageControl;
    NSLayoutConstraint *_pageControlYAnchor;
    double _fontScaleFactor;
    unsigned long long _pageCount;
    unsigned long long _cellsPerColumn;
    struct CGSize { double width; double height; } _columnSize;
    BOOL _twoColumnsPerPage;
}

@property (readonly, nonatomic, getter=_shouldUseWordsNotSymbols) BOOL shouldUseWordsNotSymbols;
@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDVisualStyle *visualStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })_bestColumnSizeWithCellsPerColumn:(unsigned long long)a0 maxColumnSize:(struct CGSize { double x0; double x1; })a1 columnCount:(unsigned long long)a2 usingColumnView:(id)a3 getFontScaleFactor:(double *)a4;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)animateIn;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithKeyCommands:(id)a0 keyboard:(struct __GSKeyboard { } *)a1;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (id)discoverabilityHUDColumnView:(id)a0 descriptionStringForKeyCommand:(id)a1;
- (id)discoverabilityHUDColumnView:(id)a0 modifiersStringForKeyCommand:(id)a1;
- (id)discoverabilityHUDColumnView:(id)a0 inputStringForKeyCommand:(id)a1;
- (void)recalculatePages;
- (id)_discoverabilityTitleForKeyCommand:(id)a0;
- (id)_stringForModifierFlags:(long long)a0;
- (id)_stringForInput:(id)a0 withModifierFlags:(long long)a1;
- (id)_displayInputAndModifierFlagsForInput:(id)a0 modifierFlags:(long long)a1;
- (id)_keyCommandsForColumnIndex:(unsigned long long)a0 withCellsPerColumn:(unsigned long long)a1;
- (id)_columnViewForColumnIndex:(unsigned long long)a0 reusingView:(id)a1;
- (void)_pageControlValueChanged:(id)a0;

@end
