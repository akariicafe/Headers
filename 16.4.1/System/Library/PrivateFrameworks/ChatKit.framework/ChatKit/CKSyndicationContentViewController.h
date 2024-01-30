@class CAGradientLayer, CKSyndicationSharedWithYouViewController, UIView, NSMutableArray, UILabel;

@interface CKSyndicationContentViewController : OBWelcomeController

@property (retain, nonatomic) CKSyndicationSharedWithYouViewController *sharedWithYouViewController;
@property (nonatomic) unsigned long long onboardingPage;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UIView *highlightsView1;
@property (retain, nonatomic) UILabel *micropillView1;
@property (retain, nonatomic) UIView *highlightsView2;
@property (retain, nonatomic) UILabel *micropillView2;
@property (retain, nonatomic) UIView *combinedHighlightsView;
@property (retain, nonatomic) UIView *tvLinkBalloonView;
@property (retain, nonatomic) UIView *podcastLinkBalloonView;
@property (retain, nonatomic) UIView *musicLinkBalloonView;
@property (retain, nonatomic) UIView *tvPinIconView;
@property (retain, nonatomic) UIView *podcastPinIconView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double photoShortSide;
@property (nonatomic) double photoLongSide;
@property (nonatomic) struct CGSize { double width; double height; } maxContentSize;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithIndex:(unsigned long long)a0;
- (void)updateViewConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)_setUpPhotosMicropillForAvatarImage:(id)a0 forName:(id)a1;
- (id)getPinIcon;
- (void)setUpHighlightsContent;
- (void)setUpPhotosContent;
- (void)setUpSharedWithYouContentCollectionView;
- (void)updateMaxContentSize;

@end
