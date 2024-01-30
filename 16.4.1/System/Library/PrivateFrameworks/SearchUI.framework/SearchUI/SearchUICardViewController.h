@class SFCard, NSTimer, NSString, SearchUIBackgroundView, NUIContainerBoxView, TLKLabel, UIViewController, UITextField, UIActivityIndicatorView;
@protocol SearchUICommandDelegate, SFFeedbackListener, SearchUICardTableBridgingProtocol, SearchUICardViewDelegate;

@interface SearchUICardViewController : UIViewController <SearchUISizingDelegate>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) NUIContainerBoxView *loadingView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;
@property (retain, nonatomic) TLKLabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (retain, nonatomic) UIViewController<SearchUICardTableBridgingProtocol> *tableViewController;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (weak, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setFooterView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)init;
- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)a0;
- (void)cardViewDidAppear;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)displayLoadingViewAfterDelay:(double)a0 withSpinner:(BOOL)a1;
- (BOOL)hasCustomViewControllersForCardSections;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (void)prepareLoadingView;
- (id)testingTableViewController;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;

@end
