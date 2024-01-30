@class TVRUIButton, TVRUIPagingButton, NSMutableArray;
@protocol TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIButtonPanelView : UIView

@property (retain, nonatomic) TVRUIButton *primaryButton;
@property (retain, nonatomic) TVRUIPagingButton *pagingButton;
@property (retain, nonatomic) NSMutableArray *leftButtons;
@property (retain, nonatomic) NSMutableArray *rightButtons;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonEventDelegate;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (id)_searchButton;
- (void)_buttonTapped:(id)a0;
- (void)_buttonReleased:(id)a0;
- (void)disableButtons:(BOOL)a0;
- (void)_configureButton:(id)a0;
- (void)_disableButton:(id)a0 changeAlpha:(BOOL)a1;
- (void)_enableButton:(id)a0;
- (id)_processButtons:(id)a0;
- (void)_sendButtonPressed:(long long)a0;
- (void)_sendButtonReleased:(long long)a0;
- (void)_sendButtonTapped:(long long)a0;
- (void)disableSearchButton;
- (void)enableButtonsForDevice:(id)a0;
- (void)enableSearchButton;
- (id)initPagedPanelWithPrimaryButtonType:(long long)a0 secondaryLeftButtons:(id)a1 styleProvider:(id)a2;
- (id)initWithPrimaryButtonType:(long long)a0 secondaryLeftButtons:(id)a1 secondaryRightButtons:(id)a2 styleProvider:(id)a3;

@end
