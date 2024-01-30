@class VKCVisualSearchResultItem, UIButton, NSString, MADVIVisualSearchResultItem, UITapGestureRecognizer;
@protocol VKCCornerLookupButtonDelegate;

@interface VKCCornerLookupButton : VKCTappableView <UIPointerInteractionDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) VKCVisualSearchResultItem *resultItem;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<VKCCornerLookupButtonDelegate> delegate;
@property (nonatomic) BOOL isShowingVisualResultsPane;
@property (retain, nonatomic) MADVIVisualSearchResultItem *searchItem;
@property (retain, nonatomic) NSString *currentRVItemID;
@property (nonatomic) BOOL observingInteractionDidFinish;
@property (nonatomic) BOOL didProcessResult;
@property (nonatomic) BOOL shouldShowResultWhenVisible;
@property (nonatomic) double buttonWidth;
@property (nonatomic) double buttonHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_setupGestures;
- (void)didTap;
- (void).cxx_destruct;
- (void)_updateImage;
- (void)dealloc;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)didMoveToWindow;
- (id)_queryString;
- (void)_setupButton;
- (double)cornerButtonSize;
- (void)showVisualSearchResultView;
- (id)_symbolNameForItem;
- (id)_defaultSymbolName;
- (id)imageForButton;
- (void)updateIndicatorDotForState;
- (double)contentSizeScaleFactor;
- (id)_backgroundColorBehindText;
- (void)showLookupUIPaneForResultItem;
- (id)queryForProcessingResult;
- (void)_didDismissVisualResultsPane:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resultItem:(id)a1;
- (void)didDismissVisualResultsPane;

@end
