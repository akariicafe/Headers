@class MPCPlayerResponse, MRUVisualStylingProvider, MRUTransportButton;
@protocol MRUNowPlayingTransportControlsViewDelegate;

@interface MRUNowPlayingTransportControlsView : UIView

@property (retain, nonatomic) MRUTransportButton *tvRemoteButton;
@property (retain, nonatomic) MRUTransportButton *leftButton;
@property (retain, nonatomic) MRUTransportButton *middleButton;
@property (retain, nonatomic) MRUTransportButton *rightButton;
@property (retain, nonatomic) MRUTransportButton *languageOptionsButton;
@property (weak, nonatomic) id<MRUNowPlayingTransportControlsViewDelegate> delegate;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) BOOL showTVButtons;

- (void)currentLocaleDidChangeNotification:(id)a0;
- (void)layoutSubviews;
- (void)didSelectedRightButton:(id)a0;
- (void)didSelectedMiddleButton:(id)a0;
- (void)didSelectLanguageOptionsButton:(id)a0;
- (void)updateImageConfiguration;
- (void)updateResponse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonHoldReleased:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)didSelectedLeftButton:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)buttonHoldBegan:(id)a0;
- (void)didSelectTVRemoteButton:(id)a0;

@end
