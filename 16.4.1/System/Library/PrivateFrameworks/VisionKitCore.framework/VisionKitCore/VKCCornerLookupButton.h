@class VKCVisualSearchResultItem, VKCVisualSearchResult, UIButton, NSString, UITapGestureRecognizer;
@protocol VKCCornerLookupButtonDelegate;

@interface VKCCornerLookupButton : VKCTappableView <UIPointerInteractionDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) VKCVisualSearchResultItem *resultItem;
@property (retain, nonatomic) VKCVisualSearchResult *result;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<VKCCornerLookupButtonDelegate> delegate;
@property (nonatomic) BOOL isShowingVisualResultsPane;
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

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_setupGestures;
- (void)didMoveToWindow;
- (void)_updateImage;
- (void)showVisualSearchResultView;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (id)_queryString;
- (void).cxx_destruct;
- (void)_setupButton;
- (void)didTap;
- (id)_backgroundColorBehindText;
- (id)_defaultSymbolName;
- (void)_didDismissVisualResultsPane:(id)a0;
- (id)_symbolNameForItem;
- (double)contentSizeScaleFactor;
- (double)cornerButtonSize;
- (void)didDismissVisualResultsPane;
- (id)imageForButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resultItem:(id)a1;
- (id)queryForProcessingResult;
- (void)showLookupUIPaneForResultItem;
- (void)updateIndicatorDotForState;

@end
