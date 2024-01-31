@class CNAvatarViewController, UITapGestureRecognizer, CAShapeLayer, UIImageView, UIView, UILabel, UIActivityIndicatorView;
@protocol CNMeCardSharingAvatarViewControllerDelegate, CNAvatarImageProvider, CNMeCardSharingAvatarProvider;

@interface CNMeCardSharingAvatarViewController : UIViewController

@property (nonatomic) BOOL isWaitingForPosterPreviews;
@property (nonatomic) BOOL posterPreviewsGenerationTimedOut;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) CAShapeLayer *circularLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *addPhotoLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) id<CNMeCardSharingAvatarProvider> avatarProvider;
@property (retain, nonatomic) id<CNAvatarImageProvider> fallbackImageProvider;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL needsReload;
@property (weak, nonatomic) id<CNMeCardSharingAvatarViewControllerDelegate> delegate;

- (void)reload;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (void)removePosterAnimationController;
- (void)addPosterAnimationController:(id)a0;
- (void)addPosterAnimationLoadingSpinner;
- (void)configureSubviews;
- (void)didTapAvatarView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContainerView;
- (id)initWithAvatarProvider:(id)a0;
- (id)initWithAvatarProvider:(id)a0 mode:(long long)a1;
- (struct CGSize { double x0; double x1; })portraitScreenSize;
- (void)reloadAvatarImage;
- (void)reloadPosterImage;
- (void)removePosterAnimationLoadingSpinner;
- (BOOL)showsPosterAnimation;
- (void)updateImageAnimated:(BOOL)a0 newImage:(id)a1 placeHolder:(BOOL)a2 additionalAnimatedChanges:(id /* block */)a3;
- (void)updateViewsToUseGeneratedAvatarImage:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateViewsToUseGeneratedImage:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 usingFallback:(BOOL)a2;
- (void)updateViewsToUseGeneratedPosterImage:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateWithAvatarProvider:(id)a0;

@end
