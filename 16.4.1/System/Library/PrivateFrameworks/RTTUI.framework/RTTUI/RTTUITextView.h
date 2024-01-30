@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface RTTUITextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    long long _leftIndex;
    struct CGPoint { double x; double y; } _panContentOffset;
    double _currentKeyboardWidth;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_leftBackgroundColorEdge;
    UIView *_rightBackgroundColorEdge;
    UIView *_middleBackgroundColorEdge;
    UIView *_inputAccessoryPlaceholderView;
    UIView *_iPadBufferView;
}

@property (retain, nonatomic) UICollectionView *predictionsCollectionView;
@property (nonatomic) BOOL isHandlingKeyboardFrameChanged;
@property (nonatomic) BOOL showTTYPredictions;
@property (retain, nonatomic) NSArray *ttyAbbreviations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disableInputBars;
- (id)inputAccessoryView;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)accessibilityIdentifier;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)keyboardAppearance;
- (id)keyCommands;
- (void)_keyboardWillHide:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (BOOL)_accessibilityIsRealtimeElement;
- (void)_inlineTTYAbbreviationSelected:(id)a0;
- (void)_didSwipeLeft:(id)a0;
- (void)_tapTTYBarCell:(id)a0;
- (void)_didPanPredictions:(id)a0;
- (void)_insertWhitespaceIfNeeded;
- (BOOL)_isKeyboardPredictionsEnabled;
- (void)_kbFrameChanged:(id)a0;
- (void)_loadTTYAbbreviations;
- (float)_predictionsCellBuffer;
- (float)_predictionsCellHeight;
- (int)_predictionsPerPage;
- (void)_resetTTYBarPosition;
- (void)_setupOverlayPredictions;
- (BOOL)_shouldShowTTYPredictions;
- (void)_showInlineRTTAbbreviations:(BOOL)a0;
- (void)_updateBlackBarPositioning;
- (void)_updateTTYBarFrame;
- (void)_updateTTYBarPosition;
- (void)overrideTTYPredictionsHidden:(BOOL)a0;
- (double)ttyBarHeight;
- (void)updateTTYBar;

@end
