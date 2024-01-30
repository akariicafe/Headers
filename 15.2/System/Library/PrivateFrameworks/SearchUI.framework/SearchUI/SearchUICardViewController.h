@class SFCard, NSTimer, NSString, SearchUIBackgroundView, NUIContainerBoxView, TLKLabel, UIViewController, UIActivityIndicatorView;
@protocol SearchUICommandDelegate, SFFeedbackListener, SearchUICardTableBridgingProtocol, SearchUICardViewDelegate;

@interface SearchUICardViewController : UIViewController <SearchUISizingDelegate>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) NUIContainerBoxView *loadingView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;
@property (retain, nonatomic) TLKLabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) UIViewController<SearchUICardTableBridgingProtocol> *tableViewController;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)init;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)prepareLoadingView;
- (void)displayLoadingViewAfterDelay:(double)a0 withSpinner:(BOOL)a1;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;
- (BOOL)hasCustomViewControllersForCardSections;
- (void)cardViewDidAppear;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (id)testingTableViewController;

@end
