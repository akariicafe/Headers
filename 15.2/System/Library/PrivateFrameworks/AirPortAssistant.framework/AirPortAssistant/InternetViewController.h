@class NSString, UIImageView, UIActivityIndicatorView, UIView, UILabel;

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UILabel *descriptionLabel;
}

@property (retain, nonatomic) NSString *swapDescriptionText;
@property (retain, nonatomic) NSString *swapSourceLabelText;
@property (retain, nonatomic) UIView *spinnerWithStatusAdjacentView;
@property (retain, nonatomic) UIView *descriptionContainerView;
@property (retain, nonatomic) UIView *diagramContainerView;
@property (retain, nonatomic) UIImageView *cablingImageLastFrame;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (nonatomic) unsigned long long internetFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)presentInternetDisconnectedUI;
- (void)presentInternetWANPluginUI;
- (void)presentSwapCablingCompleteUI;
- (void)presentSwapCablingUI;
- (void)addInternetWANPluginUI;
- (void)addInternetNotWorkingUI;
- (void)addSwapCablingUI;
- (void)determineInfoForDevice:(id)a0 deviceDiagramInfo:(struct { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; } *)a1;
- (void)startAnimatingCablingForView:(id)a0 startingOpacity:(float)a1 endingOpacity:(float)a2 duration:(double)a3;
- (void)addInformationalDiagramWithWANConnectedBaseProductID:(unsigned int)a0 replacementProductID:(unsigned int)a1;
- (void)setCommonTraitsForLabel:(id)a0 forSize:(double)a1;

@end
