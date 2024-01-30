@class SFCard, NSTimer, NSString, SearchUICardTableViewController, SearchUIBackgroundView, NUIContainerBoxView, TLKLabel, UIActivityIndicatorView;
@protocol SearchUICardViewDelegate, SFFeedbackListener;

@interface SearchUICardViewController : UIViewController <SearchUISizingDelegate>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) NUIContainerBoxView *loadingView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;
@property (retain, nonatomic) TLKLabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) SearchUICardTableViewController *tableViewController;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)prepareLoadingView;
- (void)displayLoadingViewAfterDelay:(double)a0 withSpinner:(BOOL)a1;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;
- (BOOL)hasCustomViewControllersForCardSections;
- (void)cardViewDidAppear;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (double)contentHeightForWidth:(double)a0;
- (id)testingTableViewController;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (BOOL)_canShowWhileLocked;

@end
